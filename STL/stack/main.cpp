#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.push(5); // {5,4,3,2,1}

    cout<<st.top(); // print 5
    st.pop(); // delete top element
    cout<<endl;
    cout<<endl;

    cout<<st.top(); // ptint 4

    cout<<endl;
    cout<<endl;

    cout<<st.size(); // find length
    cout<<endl;
    cout<<"after swap: ";
    cout<<endl;

    stack<int>st1;
    st1.swap(st);

    cout<<st1.size();
    return 0;
}
