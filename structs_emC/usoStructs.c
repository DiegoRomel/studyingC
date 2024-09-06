#include <stdio.h>
#include <stdlib.h>
// create a program that calculate the average of any data of two structs and tell
// which one got the best grades.

struct class
{
  float nota1;
  float nota2;
  float nota3;
  float nota4;
} first_class, second_class;

int main(void)
{
  struct class get_data(struct class this_class);
  void calculate_result(struct class first_class, struct class second_class);

  printf("---------which one was the best class?---------\n");
  first_class = get_data(first_class);
  second_class = get_data(second_class);
  calculate_result(first_class, second_class);

  return 0;
}

struct class get_data(struct class this_class)
{
  printf("enter the fist grade: \n");
  scanf("%f", &this_class.nota1);
  printf("Enter the second grade: \n");
  scanf("%f", &this_class.nota2);
  printf("enter the third grade: \n");
  scanf("%f", &this_class.nota3);
  printf("enter the fourth grade: \n");
  scanf("%f", &this_class.nota4);

  return this_class;
}

void calculate_result(struct class first_class, struct class second_class)
{
  float sum_first_class = first_class.nota1 + first_class.nota2 + first_class.nota3 + first_class.nota4;

  float sum_second_class = second_class.nota1 + second_class.nota2 + second_class.nota3 + second_class.nota4;

  printf("first class total points: %f.\n", sum_first_class);
  printf("second class total points: %f.\n", sum_second_class);

  if (sum_first_class > sum_second_class)
    printf("first class was the best.\n");
  else
    printf("second class was the best.\n");
}