#include <stdio.h>

enum Month {
  JAN,FEB,MAR,APR,
  MAY,JUN,JUL,AUG,
  SEP,OCT,NOV,DEC,
};

struct Time {
  unsigned char hours;
  unsigned char minutes;
  unsigned char seconds;
};

struct Date {
  enum Month month;
  unsigned char day_of_month;
  unsigned short year;
  _Bool AD;
};

struct DateTime {
  struct Date date;
  struct Time time;
};

int main(int argc, char const *argv[]) {
  struct Time time_now = {1, 1, 1};

  printf("%hhi\n", time_now.seconds);

  time_now.seconds++;

  printf("%hhi\n", time_now.seconds);

  struct DateTime christmas = {.time = {0, 0, 0}, .date = {DEC, 24, 0, 1}};
  struct DateTime independenc_day = {{.year = 1776, .AD = 1, .month = JUL, .day_of_month = 4,}};

  struct DateTime holidays[10];
  holidays[0] = christmas;
  holidays[1] = independenc_day;

  printf("Independe Day happend in the yera %i\n", holidays[1].date.year);
  return 0;
}
