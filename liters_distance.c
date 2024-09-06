#include <stdio.h>
int main(void)
{
  // car does 12km/L
  int hour, speed, distance;
  scanf("%d %d", &hour, &speed);
  distance = speed * hour;
  double liter = distance / 12.00;
  printf("%.3lf\n", liter);
  return 0;
}