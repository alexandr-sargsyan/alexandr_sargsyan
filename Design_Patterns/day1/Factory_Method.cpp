#include <iostream>
using namespace std;

class Car
{
public:
    virtual string Operation() = 0;
};

class Eraz : public Car
{
public:
    string Operation() override
    {
        return " hello i am Eraz, i from Armenia !!! ";
    }
};

class Lada : public Car
{
public:
    string Operation() override
    {
        return " hello i am Lada, i from russia !!!  ";
    }
};

class Toyota : public Car
{
public:
    string Operation() override
    {
        return " hello i am Toyota, i from Japan !!!  ";
    }
};

class Mersedes : public Car
{
public:
    string Operation() override
    {
        return " hello i am Mersedes, i from Germany !!!  ";
    }
};

class Car_fabrica
{
public:
    Car *get_car(int telefon_kod)
    {
        Car *car = nullptr;

        switch (telefon_kod)
        {
        case 374:
            car = new Eraz();
            break;
        case 7:
            car = new Lada();
            break;
        case 81:
            car = new Toyota();
            break;
        case 49:
            car = new Mersedes();
            break;

        default:
            cout << "SXAL HERAXOSI KOD ";
            break;
        }
        return car;
    }
};

int main()
{

    Car_fabrica n1 = Car_fabrica();

    Car *m1 = n1.get_car(374);
    cout << m1->Operation() << endl;

    Car *m2 = n1.get_car(7);
    cout << m2->Operation() << endl;

    Car *m3 = n1.get_car(49);
    cout << m3->Operation() << endl;

    Car *m4 = n1.get_car(81);
    cout << m4->Operation() << endl
         << endl;

    return 0;
}