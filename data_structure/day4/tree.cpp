#include <iostream>

using namespace std;

class Node
{
public:
    int date;
    Node *left;
    Node *right;
    Node(int date = 0, Node *left = nullptr, Node *right = nullptr)
    {
        this->date = date;
        this->left = left;
        this->right = right;
    }
};

void printNode(Node *temp)
{
    if (temp == nullptr)
    {
        return;
    }
    cout << temp->date << ", ";

    printNode(temp->left);
    printNode(temp->right);
}

class Tree
{

public:
    Tree()
    {
        root = nullptr;
    }

    void printTree()
    {
        printNode(root);
    }

    void insertNode(int date)
    {
        if (root == nullptr)
        {
            root = new Node(date);
        }
        else
        {
            Node *temp = root;
            while (true)
            {
                if (date <= temp->date)
                {

                    if (temp->left == nullptr)
                    {
                        temp->left = new Node(date);
                        break;
                    }
                    temp = temp->left;
                }
                else
                {

                    if (temp->right == nullptr)
                    {
                        temp->right = new Node(date);
                        break;
                    }
                    temp = temp->right;
                }
            }
        }
    }

    Node sorchDate(int date)
    {
        if (root == nullptr)
        {
            cout << " >>>>>> ||  duq yndanrapes data chuneq   || <<<<<<<<" << endl;
            return *root;
        }
        else
        {
            Node *temp = root;
            while (temp)
            {
                if (date <= temp->date)
                {

                    if (temp->left->date == date)
                    {
                        return *temp->left;
                    }
                    temp = temp->left;
                }
                else
                {

                    if (temp->right->date == date)
                    {
                        return *temp->right;
                    }
                    temp = temp->right;
                }
            }

            cout << " >>>>>> ||  aydpisi data chka  || <<<<<<<<" << endl;
            return *root;
        }
    }

private:
    Node *root;
};

int main()
{

    Tree a1;

    a1.insertNode(19);
    a1.insertNode(77);
    a1.insertNode(99);
    a1.insertNode(444);
    a1.insertNode(1);
    a1.insertNode(2);
    a1.insertNode(999);

    a1.printTree();

    cout << endl;

    Node x1 = a1.sorchDate(444);
    cout << x1.date << " <<<<<<<<<  poiskna es ";
    cout << endl;

    ////// >>>>>>>>>>>>>>>    destruktory hscralchum sarqim  sor ynnanum

    return 0;
}