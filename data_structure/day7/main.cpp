#include <iostream>

#include "graph.cpp"
#include "graph.hpp"
using namespace std;

int main()
{
    Graph graph(4);
    graph.addNode();
    cout << endl;
    graph.print();
    graph.addEdge(2, 1);
    cout << endl;
    graph.print();
    cout << endl;
    graph.addNode();
    graph.addEdge(3, 3);
    graph.print();
    cout << endl;
    graph.removeEdge(3, 3);
    graph.print();

    cout << endl;
    graph.removeNode();
    graph.print();
    cout << endl;
    
    cout << graph.isEdgeExists(2, 1);
    cout << endl;
    
    cout << graph.IsPathExists(0, 1) << " <<<<< 1 " << endl;
    cout << graph.IsPathExists(2, 3) << " <<<<< 2 " << endl;
    cout << graph.IsPathExists(1, 3) << " <<<<< 3 " << endl;
    cout << graph.IsPathExists(3, 0) << " <<<<< 4 " << endl;

    graph.nodeNeighouns(0);
    cout << endl;

    graph.nodeConnections(1);
    cout << endl;

    graph.nodeConnections(3);
    cout << endl;

    graph.nodeConnections(2);

    cout << endl;

    return 0;
}