#ifndef LIST_H
#define LIST_H
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
    Node<T> *tail;
    int _size;

public:
    List();
    ~List();

    void add_end(T data);
    void addAt(T, int);
    int GetSize() { return _size; }


    T &operator[](const int index);
    T getElement(int index);
    void remove_front();
    void remove_all();
    void remove_index(int index);
    void removeEnd();


};

//#include <ostream>
// using namespace std;

template <typename T>
List<T>::List()
{
    head = nullptr;
    _size = 0;
}
template <typename T>
List<T>::~List()
{
    cout << ">>>>>>>>>>> kanchvel e destruktor <<<<<<<<<<<<<<<<<<<<" << endl;
    remove_all();
}
template <typename T>
void List<T>::add_end(T data)
{
    if (head == nullptr)
    {
        head = new Node<T>(data);
        tail = head;
    }
    else
    {
        Node<T> *current = tail;
        current->pNext = new Node<T>(data);
        tail = current->pNext;
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

    cout << "dze mutqagrac indexov goyutyun chuni uxarkum enq arajini tvyalnery"
         << endl;
    return head->data; // sta kareliyar throw qcac bayc
}

template <typename T>
void List<T>::remove_front() // es funcian jnjuma head y aysinqn arajin
                             // elementy
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

template <typename T>
void List<T>::remove_index(int index)
{
    if (index == 0)
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
template <typename T>
void List<T>::removeEnd()
{
    Node<T> *current = head;
    for (int i = 0; i <= _size - 2; i++)
    {
        current = current->pNext;
        if (i == _size - 3)
        {
            tail = current;
        }
    }
    delete current->pNext;
    current->pNext = nullptr;
    _size--;
}
template <typename T>
T List<T>::getElement(int index)
{
    Node<T> *curr = head;
    for (int i = 0; i < index; ++i)
    {
        curr = curr->pNext;
    }
    return curr->data;
}

template <typename T>
void List<T>::addAt(T data, int index)
{
    if (index == 0)
    {
        addFront(data);
    }
    else
    {
        Node<T> *previous = this->head;
        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->pNext;
        }
        Node<T> *newNode = new Node<T>(data, previous->pNext);
        previous->pNext = newNode;
        _size++;
    }
}

#endif