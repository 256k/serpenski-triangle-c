#include <stdio.h>

int main(int argc, char* argv[]) {
for (int rows = 1; rows < 40; rows++) {
    for (int col = 1; col < 80; col++) {
      if (col % rows == 0) {
	printf("*");
      } else {
	printf(" ");
      }
    }
    printf("\n");
}
  return 0;
}
