#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

void insertAtBeginning(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtEnd(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int val, int position)
{
    // insert at beginning
    if (position == 1)
    {
        insertAtBeginning(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *currNode = head;
    int currPosition = 1;
    while (currPosition < position - 1)
    {
        currNode = currNode->next;
        currPosition++;
    }

    // insert at last position
    if (currNode == tail)
    {
        currNode->next = newNode;
        newNode->prev = currNode;
        tail = newNode;
        return;
    }

    newNode->next = currNode->next;
    currNode->next->prev = newNode;
    currNode->next = newNode;
    newNode->prev = currNode;
}

void deleteBeginning(Node *&head)
{
    // if linked list is empty
    if (head == nullptr)
        return;

    Node *tempNode = head;
    head = head->next;
    delete tempNode;
}

void deleteEnd(Node *&head, Node *&tail)
{
    // if linked list is empty
    if (head == nullptr)
        return;

    // if linked list has only one node
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }

    // if linked list has more than one nodes
    Node *tempNode = tail;
    tail = tail->prev;
    tail->next = nullptr;
    delete tempNode;
}

void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    // if linked list is empty
    if (head == nullptr)
        return;

    if (position == 1)
    {
        deleteBeginning(head);
        return;
    }

    Node *currNode = head;
    int currPosition = 1;
    while (currPosition < position - 1)
    {
        currNode = currNode->next;
        currPosition++;
    }

    // to delete node at last position
    if (currNode->next == tail)
    {
        Node *tempNode = tail;
        currNode->next = nullptr;
        tail = tail->prev;
        delete tempNode;
        return;
    }

    Node *tempNode = currNode->next;
    currNode->next = tempNode->next;
    tempNode->next->prev = currNode;
    delete tempNode;
}

void printList(Node *&head)
{
    Node *currNode = head;
    while (currNode != nullptr)
    {
        cout << currNode->data << " ";
        currNode = currNode->next;
    }
    cout << endl;
}

bool searchByValue(Node *&head, int val)
{
    Node *currNode = head;
    while (currNode != nullptr)
    {
        if (currNode->data == val)
            return true;

        currNode = currNode->next;
    }
    return false;
}

int searchByPosition(Node *&head, int position)
{
    Node *currNode = head;
    int currPosition = 1;
    while (currNode != nullptr && currPosition < position)
    {
        currNode = currNode->next;
        currPosition++;
    }

    if (currNode == nullptr)
    {
        cout << "Position out of bounds." << endl;
        return -1;
    }

    return currNode->data;
}

int sizeOfList(Node *&head)
{
    Node *currNode = head;
    int count = 0;
    while (currNode != nullptr)
    {
        currNode = currNode->next;
        count++;
    }
    return count;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;

    insertAtBeginning(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 40);
    printList(head);
    insertAtPosition(head, tail, 30, 3);
    printList(head);
    insertAtPosition(head, tail, 50, 5);
    printList(head);
    insertAtPosition(head, tail, 5, 1);
    printList(head);
    deleteBeginning(head);
    printList(head);
    deleteEnd(head, tail);
    printList(head);
    deleteAtPosition(head, tail, 3);
    printList(head);
    deleteAtPosition(head, tail, 3);
    printList(head);

    searchByValue(head, 20) ? cout << "Found" << endl : cout << "Not Found" << endl;
    cout << "The value at 2nd position: " << searchByPosition(head, 2) << endl;

    cout << "Size of list: " << sizeOfList(head) << endl;
    return 0;
}