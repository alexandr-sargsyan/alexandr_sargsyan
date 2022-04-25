#include <iostream>
#include <string>

using namespace std;

template <typename T>
class List
{
private:
    template <typename U>
    class Node
    {
    public:
        Node *pNext;
        U data;

        Node(U data = U(), Node *pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    Node<T> *head;
    int _size;

public:
    List();
    ~List();

    void add_end(T data);

    int GetSize() { return _size; }

    T &operator[](const int index);

    void remove_front();

    void remove_all();

    void remove_index(int index);
};

template <typename T>
List<T>::List()
{
    head = nullptr;
    _size = 0;
}
template <typename T>
List<T>::~List()
{
    cout << ">>>>>>>>>>> kanchvel e destruktor <<<<<<<<<<<<<<<<<<<<" << endl
         << endl;
    remove_all();
}
template <typename T>
void List<T>::add_end(T data)
{
    if (head == nullptr)
    {
        head = new Node<T>(data);
    }
    else
    {
        Node<T> *current = head;
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node<T>(data);
    }

    _size++;
}

template <typename T>                   // es hanc @ralum ver sovorakan masivu nman stacve
T &List<T>::operator[](const int index) // []- operatory peregruzkaya yrac
{                                       // sranov karoxanumenq datan poxel indexov
    Node<T> *current = this->head;
    int count = 0;

    while (current != nullptr)
    {
        if (count == index)
        {
            return current->data;
        }

        current = current->pNext;
        count++;
    }

    cout << "dze mutqagrac indexov goyutyun chuni uxarkum enq arajini tvyalnery" << endl;
    return head->data; // sta kareliyar throw qcac bayc
}

template <typename T>
void List<T>::remove_front() // es funcian jnjuma head y aysinqn arajin elementy
{
    Node<T> *courrent = head;
    head = head->pNext;
    delete courrent;
    _size--;
}

template <typename T>
void List<T>::remove_all()
{ // jnjel amen inch
    while (_size)
    {
        remove_front();
    }
}
/*
template <typename T>
void List<T>::remove_index(int index)
{
    if (a == 0)
    {
        remove_front();
    }
    else
    {
        Node<T> *cour1 = head;
        for (int i = 0; i < (index - 1); i++)
        {
            cour1 = cour1->pNext;
        }

        Node<T> *cour2 = cour1->pNext;
        cour1->pNext = cour2->pNext;
            delete cour2;
    }
}
*/
int main()
{

    List<int> a1;
    a1.add_end(7);
    a1.add_end(3);
    a1.add_end(5);
    a1.add_end(12);
    a1.add_end(50);
    a1.add_end(66);
    cout << a1.GetSize() << endl;
    a1[1] = 4;
    cout << a1[1] << endl;

    return 0;
}