#include <stdlib.h>

  void f(void)
  {
     int* x = malloc(10 * sizeof(int));
     x[9] = 0;
     free(x);        // problem 1: heap block overrun
  }                    // problem 2: memory leak -- x not freed

  int main(void)
  {
     f();
     return 0;
  }
