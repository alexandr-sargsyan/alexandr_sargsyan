#include <iostream>
#include <string>
using namespace std;

class Jermastijan
{

public:
    virtual void asel_jermastijan() = 0;
};

class Celesus
{

public:
    void asel_jermastijan_c()
    {
        cout << " >>>>>>>> |||||||    jermastijan celsusov   ||||||||| <<<<<<<<<<<<< " << endl;
    }
};

class Adapter : public Celesus, public Jermastijan
{
public:
    void asel_jermastijan() override
    {
        asel_jermastijan_c();
    }
};

int main()
{

    Jermastijan *n1 = new Adapter();
    n1->asel_jermastijan();

    return 0;
}