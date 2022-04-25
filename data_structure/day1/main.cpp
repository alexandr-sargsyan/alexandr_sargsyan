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
    cout << a2.getElement(2) << endl;
    a2.remove_index(2);
    a2.addAt(40, 2);
    cout << a2.getElement(3) << endl;
    try
    {
        cout << a2[2] << endl;
        cout << a2.getElement(33) << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
