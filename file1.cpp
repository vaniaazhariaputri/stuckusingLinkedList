#include <iostream>

using namespace std;

// Node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// Stack class
class Stack
{
    Node *top; // Pointer to the top node of the stack

public:
{
    Stack()
    {
        top = NULL; // Intialize the stack with a null top pointer 
    }

    // Push operation: Insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value; // 2. assign value
        newNode->next = top; // 3. set the next pointer of the new node to the top
        top = newNode; // 4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }
}

// Pop operation: Remove the top most element from the stack
void pop()
{
    if (isEmpty())
    {
        cout << "Stack id empty." << endl;
    }

    Node *temp = top; // Create a temporary pointer to the top node
    top = top->next; // Update the top pointer to the next node
    cout << "Popped value: " << top->data << endl;
    delete temp;
}
}
