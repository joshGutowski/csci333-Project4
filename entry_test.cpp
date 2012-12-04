#include "Entry.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Entry<string> s("hello", "world");

  cout << s.getKey() << endl;
  cout << s.getValue() << endl;
  s.setValue("goodbye");
  cout << s.getValue() << endl;

  return 0;
}
