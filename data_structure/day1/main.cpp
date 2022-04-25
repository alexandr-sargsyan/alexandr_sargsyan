#include <iostream>
#include <stack>
#include <string>

#include "list.h"

using namespace std;
int main()
{
    List<int> a2;

    a2.add_end(2);
    a2.add_end(3);
    a2.add_end(25);
    a2.add_end(7);
    a2.add_end(9);

    cout << a2[3] << endl;

    return 0;
}
