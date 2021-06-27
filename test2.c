#include <stdlib.h>

int main(int argc, char *argv[])
{
  char *p = (char *)malloc(10);
  p[10] = 1;
  free(p);
  return 0;
}
