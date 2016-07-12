//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda.        *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Basic program to list DUNE tasks by the amount of CPU time used.         *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstring>
#include <cerrno>
#include <cstdlib>
#include <iostream>
#include <map>
#include <queue>

#if defined(__linux__)

// Linux headers.
#include <stdint.h>
#include <dirent.h>
#include <unistd.h>

struct TaskEntry
{
  int task_pid;
  char task_name[128];
  unsigned used_time;

  bool
  operator<(const TaskEntry& other) const
  {
    return used_time < other.used_time;
  }
};

static const long CLOCK_TICK = sysconf(_SC_CLK_TCK);
static std::map<int, TaskEntry> task_table;

int
get_dune_pid(void)
{
  FILE* fd = popen("pgrep -x dune", "r");
  if (fd == NULL)
  {
    std::fprintf(stderr, "ERROR: failed to execute popen(): %s\n", strerror(errno));
    return -1;
  }

  int pid = -1;
  if (fscanf(fd, "%d", &pid) != 1)
    pid = -1;
  pclose(fd);

  return pid;
}

int
process_task_stat(const char* task_folder)
{
  FILE* fd = fopen(task_folder, "r");
  if (fd == NULL)
  {
    std::fprintf(stderr, "ERROR: failed to read task stat: %s: %s\n",
                 task_folder, strerror(errno));
    return -1;
  }

  TaskEntry entry;
  uint64_t utime = 0;
  uint64_t stime = 0;
  int64_t cutime = 0;
  int64_t cstime = 0;

  std::fscanf(fd, "%d %s %*c %*d %*d %*d %*d %*d %*u %*u %*u %*u %*u %lu %lu %ld %ld",
              &entry.task_pid, entry.task_name, &utime, &stime, &cutime, &cstime);

  if (strcmp(entry.task_name, "(dune)") == 0)
    return 0;

  utime += stime;
  utime += cutime;
  utime += cstime;
  uint64_t total_msec = utime * 1000;
  total_msec /= CLOCK_TICK;
  entry.used_time = total_msec;

  std::map<int, TaskEntry>::iterator itr = task_table.find(entry.task_pid);
  if (itr == task_table.end())
  {
    task_table.insert(std::pair<int, TaskEntry>(entry.task_pid, entry));
  }
  else
  {
    itr->second.used_time = total_msec - itr->second.used_time;
  }

  fclose(fd);
  return 0;
}

int
create_tasks(int pid)
{
  char path[1024];
  char task_path[1024];
  std::sprintf(path, "/proc/%d/task", pid);

  DIR* dir = opendir(path);
  if (dir == NULL)
  {
    std::fprintf(stderr, "ERROR: failed to open proc folder: %s\n", strerror(errno));
    return 1;
  }

  dirent* entry;
  while ((entry = readdir(dir)) != NULL)
  {
    if (entry->d_name[0] == '.')
      continue;

    std::sprintf(task_path, "%s/%s/stat", path, entry->d_name);
    process_task_stat(task_path);
  }

  closedir(dir);

  return 0;
}

int
main(void)
{
  int pid = get_dune_pid();
  if (pid < 0)
  {
    std::fprintf(stderr, "ERROR: failed to find DUNE PID\n");
    return 1;
  }

  create_tasks(pid);
  sleep(5);
  create_tasks(pid);

  std::priority_queue<TaskEntry> tasks;
  std::map<int, TaskEntry>::const_iterator itr = task_table.begin();
  for (; itr != task_table.end(); ++itr)
  {
    tasks.push(itr->second);
  }

  while (!tasks.empty())
  {
    TaskEntry t = tasks.top();
    tasks.pop();

    if (t.used_time > 0)
      fprintf(stderr, "%d: %-18s: %5u ms\n", t.task_pid, t.task_name, t.used_time);
  }

  return 0;
}

#else
int
main(void)
{
  std::fprintf(stderr, "ERROR: this program only runs on Linux.\n");
  return 1;
}
#endif
