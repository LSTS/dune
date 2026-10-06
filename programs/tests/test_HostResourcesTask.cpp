// Integration smoke test: exercise the task without starting onMain or cleaning caches.
#include <DUNE/DUNE.hpp>
#define DUNE_TASK
#include "../../src/Monitors/HostResources/Task.cpp"
#include <chrono>
#include <iostream>
#include <thread>

int main()
{
  DUNE::Tasks::Context context;
  Monitors::HostResources::Task task("Monitors.HostResources", context);
  task.onEntityReservation();
  task.onResourceInitialization();
  if (task.m_cpus.empty() || task.m_cpus.size() > 32)
    return 1;
  for (unsigned i = 0; i < 20; ++i)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
    task.sampleResources();
    if (!task.m_have_cpu || !task.m_have_process || !task.m_process_cpu.validate())
      return 1;
    for (const auto& cpu: task.m_cpus)
      if (!cpu.message.validate())
        return 1;
  }
  task.onDeactivation();
  if (task.m_have_cpu || task.m_have_process)
    return 1;
  task.sampleResources();
  if (!task.m_have_cpu || !task.m_have_process)
    return 1;
  std::cout << "Task sampling, valid IMC values and baseline reset passed\n";
  return 0;
}
