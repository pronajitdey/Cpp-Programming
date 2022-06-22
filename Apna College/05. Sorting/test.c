#include <stdio.h>
#include <math.h>

int main(void) {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  int sum = 0, temp = num;
  int digit_count = 0;
  for (int i = temp; i > 0; i /= 10) {
    digit_count++;
  }

  while (temp > 0) {
    int last_digit = temp % 10;
    sum = sum + round(pow(last_digit, digit_count));
    // sum is int so we need to use round to get nearest int of pow value
    temp /= 10;
  }

  if (num == sum) {
    printf("Armstrong Number\n");
  } else {
    printf("Not Armstrong Number\n");
  }

  return 0;
}