#include "../../src/Monitors/HostResources/Proc.hpp"
#include <fstream>
#include <iostream>
#include <thread>
#include <chrono>

using namespace Monitors::HostResources;

static unsigned failures = 0;
static unsigned checks = 0;
static void check(bool result, const char* name)
{
  ++checks;
  if (!result)
  {
    ++failures;
    std::cerr << "FAIL: " << name << '\n';
  }
}
static bool cpu(const std::string& text, CpuSnapshot& snapshot)
{
  std::istringstream stream(text);
  return parseCpu(stream, snapshot);
}
static bool process(const std::string& text, std::uint64_t& ticks)
{
  std::istringstream stream(text);
  return parseProcess(stream, ticks);
}
int main()
{
  CpuSnapshot snapshot;
  const std::string aggregate = "cpu 10 0 20 70 0 0 0 0 999 999\n";
  check(!cpu("", snapshot), "empty CPU input");
  check(!cpu(aggregate, snapshot), "aggregate without CPUs");
  check(!cpu("cpu0 1 2 3 4 5 6 7 8\n", snapshot), "missing aggregate");
  check(!cpu(aggregate + "cpu0 1 2\n", snapshot), "partial CPU counters");
  check(!cpu(aggregate + "cpu0 1 2 x 4 5 6 7 8\n", snapshot), "invalid CPU counters");
  check(!cpu(aggregate + "cpu0 -1 2 3 4 5 6 7 8\n", snapshot), "negative CPU counter");
  check(!cpu(aggregate + "cpu0 18446744073709551616 2 3 4 5 6 7 8\n", snapshot),
        "overflowing CPU counter");
  check(!cpu(aggregate + "cpuX 1 2 3 4 5 6 7 8\n", snapshot), "invalid CPU id");
  const std::string core0 = "cpu0 1 0 2 7 0 0 0 0\n";
  check(!cpu(aggregate + core0 + core0, snapshot), "duplicate CPU id");
  check(cpu(aggregate + core0 + "cpu7 9 0 18 63 0 0 0 0\nintr 0\n", snapshot),
        "sparse CPU identifiers");
  check(snapshot.cpus.size() == 2 && snapshot.cpus.count(7) && !snapshot.cpus.count(1),
        "CPU identities retained");
  check(snapshot.total.ticks[0] == 10 && snapshot.cpus.at(0).ticks[0] == 1,
        "aggregate separated from cpu0");
  CpuSnapshot previous = snapshot;
  check(cpu(aggregate + core0, snapshot) && !sameCpus(previous, snapshot),
        "CPU removed between samples");
  check(cpu(aggregate + core0 + "cpu8 9 0 18 63 0 0 0 0\n", snapshot) &&
        !sameCpus(previous, snapshot), "CPU identity changes with same count");
  std::string many = aggregate;
  for (unsigned i = 0; i < 64; ++i)
    many += "cpu" + std::to_string(i) + " 1 0 2 7 0 0 0 0\n";
  check(cpu(many, snapshot) && snapshot.cpus.size() == 64, "more than 32 CPUs");
  CpuTimes zero, current;
  current.ticks = {{10, 0, 20, 70, 0, 0, 0, 0}};
  long double total, active;
  check(deltaCpu(zero, current, total, active) && total == 100 && active == 30,
        "CPU accounting");
  check(percentage(100 * active / total, 100) == 30, "per-CPU percentage");
  check(!deltaCpu(current, current, total, active), "zero delta");
  check(!deltaCpu(current, zero, total, active), "counter reset");
  CpuTimes decreasing = current;
  decreasing.ticks[0] = 9;
  decreasing.ticks[3] = 100;
  check(!deltaCpu(current, decreasing, total, active), "individual counter decrease");
  current.ticks.fill(std::numeric_limits<std::uint64_t>::max());
  check(deltaCpu(zero, current, total, active) && total > current.ticks[0],
        "counter sum does not overflow");
  check(percentage(999, 255) == 255 && percentage(-1, 100) == 0 &&
        percentage(std::numeric_limits<long double>::infinity(), 100) == 0,
        "bounded conversion");
  std::uint64_t ticks = 0;
  // Fields 4..13 are ten placeholders; 14=user, 15=system, 16=child user.
  const std::string tail = " R 0 0 0 0 0 0 0 0 0 0 123 45 999";
  check(process("1 (dune)" + tail, ticks) && ticks == 168, "correct utime/stime fields");
  check(process("1 (dune worker (test))" + tail, ticks) && ticks == 168,
        "process name containing spaces and parentheses");
  check(!process("1 (dune) R 0", ticks), "truncated process sample");
  check(!process("1 dune" + tail, ticks), "invalid process name");
  check(!process("1 (dune) R 0 0 0 0 0 0 0 0 0 0 -1 45", ticks),
        "negative process ticks");
  check(!process("1 (dune) R 0 0 0 0 0 0 0 0 0 0 18446744073709551615 1", ticks),
        "process sum overflow");
  std::istringstream memory("VmRSS: 2048 kB\nVmSwap: 0 kB\nMemFree: bad kB\n"
                            "SwapFree: -1 kB\nMemTotal: 42 MB\nName: dune\n");
  const auto values = parseMemory(memory);
  check(values.size() == 2 && values.at("VmRSS:") == 2048 && values.at("VmSwap:") == 0,
        "memory units, zeroes and malformed values");

  // Exercise real read-only /proc input without starting DUNE or dropping caches.
  std::ifstream stat("/proc/stat");
  CpuSnapshot live;
  check(parseCpu(stat, live), "live /proc/stat");
  std::ifstream self("/proc/self/stat");
  check(parseProcess(self, ticks), "live process statistics");
  std::ifstream status("/proc/self/status");
  check(parseMemory(status).count("VmRSS:") == 1, "live process memory");
  std::ifstream meminfo("/proc/meminfo");
  check(parseMemory(meminfo).count("MemTotal:") == 1, "live system memory");

  std::cout << checks << " checks, " << failures << " failures\n";
  return failures ? 1 : 0;
}
