/*
               *
              * *
             *   *
            * * * *
           *       *
          * *     * *
         *   *   *   *
        * * * * * * * *
       *               *
      * *             * *
     *   *           *   *
    * * * *         * * * *
   *       *       *       *
  * *     * *     * *     * *
 *   *   *   *   *   *   *   *
* * * * * * * * * * * * * * * *

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
  
  printf("The Serpinski Triangle:\n");
  
  if (!argv[1]) {
    printf("usage: enter a multiplication of 8\n Optional: pass l to print line number in hex\n");
    return 0;
  }

  int n = atoi(argv[1]); 

  if (n % 8 != 0) {
    printf("enter a number that must be mult of 8 \n");
    return -1;
  }

  for (int y = n-1; y >= 0; y--) {
    
    if (argv[2] && !strcmp(argv[2], "l")){
      printf("%x", y);
    }

    for (int i = 0; i < y; i++) {
      printf(" ");
    }

    for (int x = 0; x + y < n; x++) {
      if (x & y) { 
	printf("  "); // 2 spaces
      } else {
	printf("* ");
      }
  }
      printf("\n");
  }
    
  return 0;
}
