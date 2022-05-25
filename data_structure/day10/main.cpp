#include "hashTable.hpp"

int main() {
  HashTable a;
  a.insert("alexandr", 17);
  // a.insert("alexandr", 12);
  a.insert("rlexanda", 17);
  a.insert("bek", 18);
  a.insert("andon", 17);
  a.insert("anastas", 25);
  a.insert("laexandr", 17);
  a.insert("daxo", 1);
  a.insert("narek", 16);
  a.delite("bek");
  a.delite("andon");
  a.delite("narek");
  a.resize_X2();

  a.print();
  cout << "countElement = " << a.countElement() << endl;
  cout << a.find("alexandr") << endl;

  cout << endl;

  return 0;
}
