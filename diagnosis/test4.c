#include <stdlib.h>

int main(int argc, char *argv[])
{
  int *x = (int *)malloc(sizeof(int));
  free(x);
  int a = *x + 1;
  return 0;
}
