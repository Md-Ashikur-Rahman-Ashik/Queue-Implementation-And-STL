#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> testQueue;
    // testQueue.push(10);

    // if (!testQueue.empty())
    // {
    //     testQueue.pop();
    //     testQueue.front();
    // }

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