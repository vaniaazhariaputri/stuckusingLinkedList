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
    Stack()
    {
        top = NULL; // Intialize the stack with a null top pointer
    }

    // Push operation: Insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. set the next pointer of the new node to the top
        top = newNode;              // 4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }


// Pop operation: Remove the top most element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack id empty." << endl;
        }

        Node *temp = top; // Create a temporary pointer to the top node
        top = top->next;  // Update the top pointer to the next node
        cout << "Popped value: " << temp->data << endl;
        delete temp;
    }

    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current !=NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }

// IsEmpty operation: Check if the stack is empty
bool isEmpty()
{
    return top == NULL;
}

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice !=4)
    {
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. exit\n";
        cout << "enter your choice:  ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the entered value onto the stack
            break;
        case 2:
            if (!stack.isEmpty())
            {
                stack.pop(); // pop the top element from the stack
            }
            else
            {
                cout << "Stack is empty. Cannot pop." << endl;
            }
            break;
        case 3:
            if (!stack.isEmpty())
            {
                stack.peek(); // get the value of the top element
            }
            else
            {
                cout << "Stack is empty. No top value." << endl;
            }
            break;

        }
    }
}
