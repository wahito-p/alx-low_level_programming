#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/*prints if integer is positive or negative*/
void positive_or_negative(int i);

/*prints the largest of three integers*/
int largest_number(int a, int b, int c);

/*converts day of month to day of year, withou accounting for leap year*/
int convert_day(int month, int days);

/*takes a date and prints days left in the year, taking leap year into account*/
void print_remaining_days(int month, int day, int year);

void print_times_table(int n);

#endif
