#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int>q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    cout<<q.back(); // print 4
    cout<<endl;
    cout<<q.front(); // print 1
    q.pop(); // delete front element

    cout<<endl;
    cout<<q.front(); // print 2


    return 0;
}
