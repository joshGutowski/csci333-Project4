#include "Entry.h"
#include "Hash.h"
#include <iostream>


using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename V>
Hash<V>::Hash() {
  size = 997;
  vector<Entry<V> > newEntry;
  for(int i=0; i < size; ++i) {
    table.push_back(newEntry);
  }
}

template <typename V>
int Hash<V>::hashFunc(string k) {
  int sum = 0;
  for(int i=0; i < (int)k.size(); ++i) {
    sum+=(int)k[i];
  } 
  return sum%size;
}


template <typename V>
V Hash<V>::find(string k) {
  int hash = hashFunc(k);
  for(int i=0; i< (int)table[hash].size(); ++i) {
    if(table[hash][i].getKey()==k) {
      return table[hash][i].getValue();
    }
  }
  return (V)0;   
} 

template <typename V>
void Hash<V>::insert(string k, V v) {
  int hash = hashFunc(k);
  Entry<V> newEntry = Entry<V>(k, v);
  for(int i=0; i< (int)table[hash].size(); ++i) {
    if(table[hash][i].getKey()==k) {
      table[hash][i].setValue(v);
    }
  }
  table[hash].push_back(newEntry);
}

template <typename V>
void Hash<V>::remove(string k) {
  int hash = hashFunc(k);
  for(int i=0; i< (int)table[hash].size(); ++i) {
    if(table[hash][i].getKey()==k) {
      table[hash].erase(table[hash].begin()+i);
    }
  }
}


template class Hash<int>;
template class Hash<double>;
template class Hash<string>;
