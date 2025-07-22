#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> testList;

    void push(int inputValue)
    {
        testList.push_back(inputValue);
    }

    void pop()
    {
        if (!testList.empty())
        {
            testList.pop_front();
        }
        else
        {
            return;
        }
    }

    int front()
    {
        return testList.front();
    }

    int back()
    {
        return testList.back();
    }

    int size()
    {
        return testList.size();
    }

    bool empty()
    {
        return testList.empty();
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