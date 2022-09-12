#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Prev;
    Node *Next;

    // Constructor
    Node(int val)
    {
        this->value = val;
        this->Prev = NULL;
        this->Next = NULL;
    }
};

class Stack
{
    Node *head;
    Node *top;
    int count = 0;

public:
    // Constructor
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // PUSH
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }

        top->Next = newNode;
        newNode->Prev = top;
        top = newNode;
        count++;
    }

    // POP
    int pop()
    {
        Node *delNode = top;
        int chk = -1;
        if (head == NULL) // There is no Element in the stack
        {
            cout << "Stack Underflow" << endl;
            return chk;
        }

        if (top == head) // There is only 1 Element
        {
            head = top = NULL;
        }
        else
        {
            top = delNode->Prev;
            top->Next = NULL;
        }

        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }

    // Empty
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
    // Size
    int size()
    {
        return count;
    }
    // Top
    int top()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow || There is no Element in the top" << endl;
            return 0;
        }
        else
        {
            return top->value;
        }
    }
};
