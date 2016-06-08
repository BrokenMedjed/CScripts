#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float sum;

int main(int argc, char* argv[]) {
  int divby = argc - 1;

  if (argc < 2) {
    printf("Usage: %s <value value2 ...>\n", argv[0]);

    return 0;
  }

  for (int i = 1; i < argc; i++) {
    sum += atof(argv[i]);
  }

  float avg = sum / divby;

  printf("The average of ");

  for (int i = 1; i < argc; i++) {
    if (i != divby) {
      printf("%s, ", argv[i]);
    }
    else {
      printf("%s ", argv[i]);
    }
  }

  printf("(%d numbers) is %g\n", divby, avg);

  return 0;
}
