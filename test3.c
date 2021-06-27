#include <stdlib.h>

int main(int argc, char *argv[])
{
  int *x = (int *)malloc(sizeof(int));
  int a = *x + 1;
  free(x);
  return 0;
}
