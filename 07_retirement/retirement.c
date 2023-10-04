#include <stdio.h>
#include <stdlib.h>
struct _retire_info {
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

double calculator(double initial, retire_info r) {
  return initial = initial + initial * (r.rate_of_return/12) + r.contribution;				 	      
}

void retirement(int startAge, double initial, retire_info working, retire_info retired) {
  double res = initial;
  for(int i = 0; i < working.months; i++) { 
    printf("Age %3d month %2d you have $%.2lf\n", startAge/12, startAge%12, res);
    res = calculator(res, working);
    startAge++;
  }
  for(int j = 0; j < retired.months; j++) {                                                                      
    printf("Age %3d month %2d you have $%.2lf\n", startAge/12, startAge%12, res);      
    res = calculator(res, retired);
    startAge++;
  }                                                                                                              
}

int main(void) {
  int startAge = 327;
  double initial = 21345;
  retire_info working;
  retire_info retired;

  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045;

  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 0.01;

  retirement(startAge, initial, working, retired);
  
}
