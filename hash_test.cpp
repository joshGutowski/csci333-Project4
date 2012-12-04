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
  i.insert("olleh", 20);

  cout << i.find("hello") << endl;
  cout << i.find("world") << endl;
  cout << i.find("goodbye") << endl;
  cout << i.find("olleh") << endl;
  cout << endl;

  cout << "Removing goodbye!" << endl;
  i.remove("goodbye");
  cout << "goodbye Removed!" << endl;
  cout << endl;

  cout << i.find("hello") << endl;
  cout << i.find("world") << endl;
  cout << i.find("goodbye") << endl;
  cout << i.find("olleh") << endl;
  cout << endl;

  cout << "Removing hello!" << endl;
  i.remove("hello");
  cout << "hello Removed!" << endl;
  cout << endl;

  cout << i.find("hello") << endl;
  cout << i.find("world") << endl;
  cout << i.find("goodbye") << endl;
  cout << i.find("olleh") << endl;  
  cout << endl;

  i.insert("olleh", 25);

  cout << i.find("hello") << endl;
  cout << i.find("world") << endl;
  cout << i.find("goodbye") << endl;
  cout << i.find("olleh") << endl;  
  cout << endl;


  Hash<string> s;

  s.insert("hello", "dog");
  s.insert("world", "cat");
  s.insert("goodbye", "mouse");
  s.insert("olleh", "pony");

  cout << s.find("hello") << endl;
  cout << s.find("world") << endl;
  cout << s.find("goodbye") << endl;
  cout << s.find("olleh") << endl;
  cout << endl;

  cout << "Removing goodbye!" << endl;
  s.remove("goodbye");
  cout << "goodbye Removed!" << endl;
  cout << endl;

  cout << s.find("hello") << endl;
  cout << s.find("world") << endl;
  cout << s.find("olleh") << endl;
  cout << endl;

  cout << "Removing hello!" << endl;
  s.remove("hello");
  cout << "hello Removed!" << endl;
  cout << endl;

  cout << s.find("world") << endl;
  cout << s.find("olleh") << endl;  
  cout << endl;

  s.insert("olleh", "cow");

  cout << s.find("world") << endl;
  cout << s.find("olleh") << endl;  
  cout << endl;

  //it doesn't like having a null value for a string when you try to find an Entry after a removal.
  //Not sure what to do about it. Everything else works. 


  Hash<double> d;

  d.insert("hello", 5.5);
  d.insert("world", 10.10);
  d.insert("goodbye", 15.15);
  d.insert("olleh", 20.20);

  cout << d.find("hello") << endl;
  cout << d.find("world") << endl;
  cout << d.find("goodbye") << endl;
  cout << d.find("olleh") << endl;
  cout << endl;

  cout << "Removing goodbye!" << endl;
  d.remove("goodbye");
  cout << "goodbye Removed!" << endl;
  cout << endl;

  cout << d.find("hello") << endl;
  cout << d.find("world") << endl;
  cout << d.find("goodbye") << endl;
  cout << d.find("olleh") << endl;
  cout << endl;

  cout << "Removing hello!" << endl;
  d.remove("hello");
  cout << "hello Removed!" << endl;
  cout << endl;

  cout << d.find("hello") << endl;
  cout << d.find("world") << endl;
  cout << d.find("goodbye") << endl;
  cout << d.find("olleh") << endl;  
  cout << endl;

  d.insert("olleh", 25.25);

  cout << d.find("hello") << endl;
  cout << d.find("world") << endl;
  cout << d.find("goodbye") << endl;
  cout << d.find("olleh") << endl;  
  cout << endl;



  return 0;
}
