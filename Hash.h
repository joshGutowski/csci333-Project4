#ifndef __HASH_H__
#define __HASH_H__

#include "Entry.h"
#include <vector>
#include <string>

using std::string;
using std::vector;

template <typename V>
class Hash {
 private:
  int size;
  int hash(string s);
  vector<vector<Entry<V>* > > table;

 public:
  Hash<V>();

  void insert(string k, V v);
  V find(string k);
  void remove(string k);
};


#endif
