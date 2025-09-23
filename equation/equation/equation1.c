#include <stdio.h>
#include <math.h>
int main() {
  float a, b, c, x1, x2;
  scanf_s("%f%f%f", &a, &b, &c);
  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        printf("Корней бесконечно много");
        return 0;
      }
      else {
        printf("решений нет");
        return 0;
      }
    }
    x1 = (-c) / b;
    printf("x1 корень = %f", x1);
    return 0;
  }
  else {
    if ((b * b - 4 * a * c) == 0) {
      x1 = (-b) / (2 * a);
      printf("корни равны =%f", x1);
      return 0;
    }
    else if ((b * b - 4 * a * c) < 0) {
      printf("решений нет, дискриминант отрицателен");
      return 0;
    }
    else if ((b * b - 4 * a * c) > 0) {
      x1 = ((-b) + sqrt(b * b - 4 * a * c)) / (2 * a);
      x2 = ((-b) - sqrt(b * b - 4 * a * c)) / (2 * a);
      printf("x1=%f", x1);
      printf("x2=%f", x2);
      return 0;
    }
  }

}