#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class circularLinkedList
{
    Node* head;
public :
    circularLinkedList(): head(nullptr) {};

    void addToBeginning(int data)
    {
        Node* newNode = new Node;
        newNode -> data = data;
        newNode -> next = nullptr;

        if (!head)
        {
            head = newNode;
            newNode -> next =head;
        }
        else
        {
            Node* temp = head;

            while (temp-> next != head)
            {
                temp = temp-> next;
            }

            temp ->next =newNode;
            newNode ->next = head;
            head = newNode;
        }
    }

    void addToEnd(int data)
    {
        Node* newNode = new Node;
        newNode -> data = data;
        newNode -> next = nullptr;

        if (!head)
        {
            head = newNode;
            newNode -> next = head;
        }

        else
        {
            Node* temp = head;

            while (temp -> next != head)
            {
                temp = temp-> next;
            }
            temp -> next = newNode;
            newNode -> next = head;
        }
    }

        void displayForward()
        {
            if (!head)
            {
                cout <<"The list is empty" << endl;
                return;
            }

            Node* temp = head;
            cout << "Circular linked list: " << endl;

            do
            {
                cout << temp -> data << "->";
                temp = temp -> next;
            }
            while (temp != head);

            cout << "(head)" << endl;
        }

};


int main()
{
    circularLinkedList cll;

    cll.addToBeginning(10);
    cll.addToBeginning(20);
    cll.addToEnd(30);
    cll.addToEnd(40);

    cll.displayForward();

    return 0;
}
