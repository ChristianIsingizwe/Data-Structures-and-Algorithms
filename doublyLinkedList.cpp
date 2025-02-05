#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* prev;
    Node* next;
};

class doublyLinkedList
{
    Node* head;
    Node* tail;

public:


    doublyLinkedList(): head(nullptr), tail(nullptr) {};

    void addToBeginning(int data)
    {
        Node* newNode = new Node{data, nullptr, head};
        if (!head)
        {
            head = tail= newNode;
        }
        else
        {
            newNode -> next =head;
            head -> prev = newNode;
            head = newNode;
        }
    }

    void addToEnd(int data)
    {
        Node* newNode = new Node{data, tail, nullptr};
        if (!tail)
        {
            head = tail= newNode;
        }
        else
        {
            newNode -> prev = tail;
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void printForward()
    {
        Node* temp = head;

        cout << "Doubly Linked list: " << endl;
        while (temp)
        {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "null" << endl;
    }

    void printBackward()
    {
        Node* temp = tail;

        cout << "Doubly Linked list backwards: " << endl;
        while (temp)
        {
            cout << temp -> data << "<->";
            temp = temp-> prev;
        }
        cout << "null" <<endl;
    }
};

int main()
{

    doublyLinkedList listStructure;

    listStructure.addToBeginning(10);
    listStructure.addToBeginning(20);
    listStructure.addToEnd(30);
    listStructure.addToEnd(40);

    listStructure.printForward();
    listStructure.printBackward();

    return 0;
}
