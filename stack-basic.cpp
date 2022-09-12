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

public:
    // PUSH
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = top = newNode;
            return;
        }

        top->Next = newNode;
        newNode->Prev = top;
        top = newNode;
    }
};

int main()
{
    return 0;
}