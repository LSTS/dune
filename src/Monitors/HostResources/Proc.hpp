// Linux /proc parsing shared by HostResources and its regression tests.
#ifndef MONITORS_HOSTRESOURCES_PROC_HPP_INCLUDED_
#define MONITORS_HOSTRESOURCES_PROC_HPP_INCLUDED_

#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
#include <limits>
#include <map>
#include <sstream>
#include <string>

namespace Monitors
{
  namespace HostResources
  {
    inline bool
    readUnsigned(const std::string& text, std::uint64_t& value)
    {
      if (text.empty())
        return false;
      value = 0;
      for (char c: text)
      {
        if (c < '0' || c > '9' ||
            value > (std::numeric_limits<std::uint64_t>::max() - (c - '0')) / 10)
          return false;
        value = value * 10 + (c - '0');
      }
      return true;
    }

    struct CpuTimes
    {
      std::array<std::uint64_t, 8> ticks{};
    };

    struct CpuSnapshot
    {
      CpuTimes total;
      std::map<unsigned, CpuTimes> cpus;
    };

    inline bool
    parseCpu(std::istream& input, CpuSnapshot& result)
    {
      CpuSnapshot sample;
      bool aggregate = false;
      std::string line;
      while (std::getline(input, line))
      {
        std::istringstream fields(line);
        std::string label;
        fields >> label;
        if (label.compare(0, 3, "cpu") != 0)
          break;
        CpuTimes times;
        for (auto& tick: times.ticks)
        {
          std::string value;
          if (!(fields >> value) || !readUnsigned(value, tick))
            return false;
        }
        // guest and guest_nice are already included in user and nice.
        if (label == "cpu")
        {
          if (aggregate || !sample.cpus.empty())
            return false;
          sample.total = times;
          aggregate = true;
        }
        else
        {
          std::uint64_t id;
          if (!aggregate || !readUnsigned(label.substr(3), id) ||
              id > std::numeric_limits<unsigned>::max() ||
              !sample.cpus.emplace(static_cast<unsigned>(id), times).second)
            return false;
        }
      }
      if (input.bad() || !aggregate || sample.cpus.empty())
        return false;
      result = sample;
      return true;
    }

    inline bool
    deltaCpu(const CpuTimes& previous, const CpuTimes& current,
             long double& total, long double& active)
    {
      total = active = 0;
      for (std::size_t i = 0; i < current.ticks.size(); ++i)
      {
        // Discard counter resets, including decreasing iowait.
        if (current.ticks[i] < previous.ticks[i])
          return false;
        const long double delta = current.ticks[i] - previous.ticks[i];
        total += delta;
        if (i != 3 && i != 4)
          active += delta;
      }
      return total > 0;
    }

    inline unsigned
    percentage(long double value, unsigned maximum)
    {
      if (!std::isfinite(value) || value <= 0)
        return 0;
      return static_cast<unsigned>(std::round(std::min(value, static_cast<long double>(maximum))));
    }

    inline bool
    parseProcess(std::istream& input, std::uint64_t& ticks)
    {
      std::string line;
      if (!std::getline(input, line))
        return false;
      // comm may contain whitespace and parentheses.
      const auto end = line.rfind(')');
      const auto begin = line.find('(');
      if (begin == std::string::npos || end == std::string::npos || end <= begin)
        return false;
      std::istringstream fields(line.substr(end + 1));
      std::string field;
      std::uint64_t user = 0, system = 0;
      for (unsigned index = 3; index <= 15; ++index)
      {
        if (!(fields >> field))
          return false;
        if (index == 14 && !readUnsigned(field, user))
          return false;
        if (index == 15 && !readUnsigned(field, system))
          return false;
      }
      if (user > std::numeric_limits<std::uint64_t>::max() - system)
        return false;
      ticks = user + system;
      return true;
    }

    inline std::map<std::string, double>
    parseMemory(std::istream& input)
    {
      std::map<std::string, double> result;
      std::string line;
      while (std::getline(input, line))
      {
        std::istringstream fields(line);
        std::string key, text, unit;
        std::uint64_t value;
        if ((fields >> key >> text >> unit) && unit == "kB" && readUnsigned(text, value))
          result[key] = static_cast<double>(value);
      }
      return result;
    }

    inline bool
    sameCpus(const CpuSnapshot& a, const CpuSnapshot& b)
    {
      if (a.cpus.size() != b.cpus.size())
        return false;
      auto i = a.cpus.begin();
      auto j = b.cpus.begin();
      for (; i != a.cpus.end(); ++i, ++j)
        if (i->first != j->first)
          return false;
      return true;
    }
  }
}
#endif

