#include <DUNE/DUNE.hpp>
#include <cstdio>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

using DUNE_NAMESPACES;

unsigned
getMonth(const std::string& month)
{
  if (month == "JAN") return 0;
  if (month == "FEB") return 1;
  if (month == "MAR") return 2;
  if (month == "APR") return 3;
  if (month == "MAY") return 4;
  if (month == "JUN") return 5;
  if (month == "JUL") return 6;
  if (month == "AUG") return 7;
  if (month == "SEP") return 8;
  if (month == "OCT") return 9;
  if (month == "NOV") return 10;
  if (month == "DEC") return 11;
  throw std::runtime_error(String::str("unknown month: %s", month.c_str()));
}

int
main(int argc, char** argv)
{
  int fd = open(argv[1], O_RDWR);
  if (fd == -1)
  {
    std::fprintf(stderr, "ERROR: failed to open file.\n");
    return 1;
  }

  unsigned count = 0;
  unsigned shot_count = 0;
  off_t size = Path(argv[1]).size();
  off_t offset = 0;
  uint8_t* mem = (uint8_t*)mmap(0, size, PROT_READ, MAP_SHARED, fd, 0);

  printf("MB_Time\tMB_Roll\tMB_Pitch\tMB_Yaw\tMB_Alt\n");

  while (offset < size)
  {
    if (mem[offset] != '8' || mem[offset + 1] != '3' || mem[offset + 2] != 'P')
    {
      fprintf(stderr, "ERROR: invalid header\n");
      break;
    }

    ++shot_count;

    unsigned total_bytes = mem[offset + 5] | mem[offset + 4] << 8;

    tm tm_time = {0};
    char month_str[16] = {0};
    double milli = 0;

    sscanf((char*)&mem[offset + 8], "%d-%[^-]-%d", &tm_time.tm_mday, month_str, &tm_time.tm_year);
    tm_time.tm_mon = getMonth(month_str);
    tm_time.tm_year -= 1900;
    sscanf((char*)&mem[offset + 20], "%d:%d:%d", &tm_time.tm_hour, &tm_time.tm_min, &tm_time.tm_sec);
    sscanf((char*)&mem[offset + 29], "%lf", &milli);

    time_t time = timegm(&tm_time);
    double tstamp = time;
    tstamp += milli;
    float altitude = 0;
    ByteCopy::fromLE(altitude, &mem[offset + 133]);

    float pitch = ((((mem[offset + 64] & 0x7F) << 8)
                    | mem[offset + 65])
                   - 900);
    pitch /= 10;

    float roll = ((((mem[offset + 66] & 0x7F) << 8)
                   | mem[offset + 67])
                  - 900);
    roll /= 10;

    float yaw = (((mem[offset + 68] & 0x7F) << 8)
                 | mem[offset + 69]);
    yaw /= 10;

    printf("%0.6f\t%0.2f\t%0.2f\t%0.2f\t%0.4f\n", tstamp, roll, pitch, yaw, altitude);

    offset += total_bytes;
  }

  munmap(mem, size);
  close(fd);

  return 0;
}
