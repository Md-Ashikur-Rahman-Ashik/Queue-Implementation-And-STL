#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int integerValue;
    Node *nextPointer;

    Node(int integerValue)
    {
        this->integerValue = integerValue;
        this->nextPointer = NULL;
    }
};

class myQueue
{
public:
    Node *head;
    Node *tail;
    int countSize = 0;

    void push(int integerValue)
    {
        countSize++;
        Node *newNode = new Node(integerValue);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->nextPointer = newNode;
            tail = newNode;
        }
    }

    void pop()
    {
        countSize--;
        if (head == NULL)
        {
            return;
        }
        else
        {
            Node *deleteNode = head;
            if (head->nextPointer == NULL)
            {
                head = NULL;
                tail = NULL;
            }
            else
            {
                head = head->nextPointer;
            }
            delete deleteNode;
        }
    }

    int front()
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            return head->integerValue;
        }
    }

    int back()
    {
        if (tail == NULL)
        {
            return;
        }
        else
        {
            return tail->integerValue;
        }
    }

    int size()
    {
        return countSize;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    return 0;
}