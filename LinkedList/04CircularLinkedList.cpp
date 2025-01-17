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
        head = tail = newNode;
        newNode->next = head;
        newNode->prev = tail;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        tail->next = newNode;
        newNode->prev = tail;
        head = newNode;
    }
}

void insertAtEnd(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = tail = newNode;
        newNode->next = head;
        newNode->prev = tail;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    newNode->next = head;
    head->prev = newNode;
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
    if (currNode->next == head)
    {
        insertAtEnd(head, tail, val);
        return;
    }

    newNode->next = currNode->next;
    newNode->prev = currNode;
    currNode->next->prev = newNode;
    currNode->next = newNode;
}

void deleteBeginning(Node *&head, Node *&tail)
{
    // if linked list is empty
    if (head == nullptr)
        return;

    // if only one node
    if (head == tail)
    {
        delete head;
        head = tail = nullptr;
        return;
    }

    Node *tempNode = head;
    head = head->next;
    tail->next = head;
    head->prev = tail;
    delete tempNode;
}

void deleteEnd(Node *&head, Node *&tail)
{
    // if linked list is empty
    if (head == nullptr)
        return;

    // if linked list has only one node
    if (head == tail)
    {
        delete head;
        head = tail = nullptr;
        return;
    }

    // if linked list has more than one nodes
    Node *tempNode = tail;
    tail = tail->prev;
    tail->next = head;
    head->prev = tail;
    delete tempNode;
}

void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    // if linked list is empty
    if (head == nullptr)
        return;

    if (position == 1)
    {
        deleteBeginning(head, tail);
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
        deleteEnd(head, tail);
        return;
    }

    Node *tempNode = currNode->next;
    currNode->next = tempNode->next;
    tempNode->next->prev = currNode;
    delete tempNode;
}

void printList(Node *head)
{
    if (head == nullptr)
    {
        cout << "The list is empty!" << endl;
        return;
    }

    Node *currNode = head;
    cout << "Circular Doubly Linked List: ";
    do
    {
        cout << currNode->data;
        if (currNode->next != head)
        {
            cout << " <=> ";
        }
        currNode = currNode->next;
    } while (currNode != head);

    cout << " <=> " << head->data;

    cout << endl;
}

bool searchByValue(Node *&head, int val)
{
    if (head == nullptr)
        return false;

    Node *currNode = head;
    do
    {
        if (currNode->data == val)
            return true;

        currNode = currNode->next;
    } while (currNode != head);

    return false;
}

int searchByPosition(Node *&head, int position)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return -1;
    }

    Node *currNode = head;
    int currPosition = 1;

    do
    {
        if (currPosition == position)
            return currNode->data;
        currNode = currNode->next;
        currPosition++;
    } while (currNode != head);

    cout << "Position out of bounds." << endl;
    return -1;
}

int sizeOfList(Node *&head)
{
    if (head == nullptr)
        return 0;

    Node *currNode = head;
    int count = 0;

    do
    {
        currNode = currNode->next;
        count++;
    } while (currNode != head);

    return count;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;

    cout << "Inserting 10 at the beginning:" << endl;
    insertAtBeginning(head, tail, 10);
    printList(head);

    cout << "\nInserting 20 at the end:" << endl;
    insertAtEnd(head, tail, 20);
    printList(head);

    cout << "\nInserting 40 at the end:" << endl;
    insertAtEnd(head, tail, 40);
    printList(head);

    cout << "\nInserting 30 at position 3:" << endl;
    insertAtPosition(head, tail, 30, 3);
    printList(head);

    cout << "\nInserting 50 at position 5:" << endl;
    insertAtPosition(head, tail, 50, 5);
    printList(head);

    cout << "\nInserting 5 at position 1 (beginning):" << endl;
    insertAtPosition(head, tail, 5, 1);
    printList(head);

    cout << "\nDeleting the beginning (first node):" << endl;
    deleteBeginning(head, tail);
    printList(head);

    cout << "\nDeleting the end (last node):" << endl;
    deleteEnd(head, tail);
    printList(head);

    cout << "\nDeleting node at position 3:" << endl;
    deleteAtPosition(head, tail, 3);
    printList(head);

    cout << "\nDeleting node at position 3 again:" << endl;
    deleteAtPosition(head, tail, 3);
    printList(head);

    cout << "\nSearching for value 20 in the list:" << endl;
    searchByValue(head, 20) ? cout << "Found" << endl : cout << "Not Found" << endl;

    cout << "\nThe value at 2nd position: " << searchByPosition(head, 2) << endl;

    cout << "\nSize of list: " << sizeOfList(head) << endl;

    return 0;
}