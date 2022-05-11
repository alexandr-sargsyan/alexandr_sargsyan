#include <iostream>

#include "graphAdjacenyList.hpp"

using namespace std;

int main() {
  Graph a1;
  cout << "1+" << endl;
  a1.addNode();
  a1.addNode();
  a1.addNode();
  a1.addNode();
  cout << "2+" << endl;

  a1.addEdge(0, 1);
  a1.addEdge(0, 2);
  a1.addEdge(0, 3);
  a1.addEdge(2, 3);

  a1.print();
  cout << endl << "3+" << endl;

  a1.removeEdge(0, 2);
  a1.print();
  cout << endl << "4+" << endl;

  a1.removeNode(2);
  a1.print();
  cout << endl << "5+" << endl;

  cout << endl;

  return 0;
}