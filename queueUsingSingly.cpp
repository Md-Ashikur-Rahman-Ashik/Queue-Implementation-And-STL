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
    Node *head = NULL;
    Node *tail = NULL;
    int countSize = 0;

    void push(int inputValue)
    {
        countSize++;
        Node *newNode = new Node(inputValue);
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
        return head->integerValue;
    }

    int back()
    {
        return tail->integerValue;
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
    myQueue testQueue;

    int queueSize;
    cin >> queueSize;

    for (int i = 0; i < queueSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        testQueue.push(inputValue);
    }

    while (!testQueue.empty())
    {
        cout << testQueue.front() << endl;
        testQueue.pop();
    }

    return 0;
}