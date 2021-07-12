#include <vector>

using namespace std;

void test() {
  vector<int> v(100, 1);
  v.at(1);
  return;
}

int main()
{
  test();
  return 0;
}
