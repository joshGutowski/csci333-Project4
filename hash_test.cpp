#include "Hash.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
  Hash<int> i;

  i.insert("hello", 5);
  i.insert("world", 10);
  i.insert("goodbye", 15);

  cout << i.find("hello") << endl;
  cout << i.find("world") << endl;
  cout << i.find("goodbye") << endl;
  cout << endl;

  cout << "Removing world!" << endl;
  i.remove("world");
  cout << "world Removed!" << endl;
  cout << endl;

  cout << i.find("hello") << endl;
  cout << i.find("world") << endl;
  cout << i.find("goodbye") << endl;  


  return 0;
}
