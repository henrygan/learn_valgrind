#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a; /*在栈上分配变量(内存)*/
  int * p = &a; /*创建指向a的地址的指针*/
  p -= 0x20; /*错误的指针操作*/
  *p = 1; /*向错误的内存地址写入*/
  return 0;
}
