#include<bits/stdc++.h>

using namespace std;
void sum(int i,int x)
{

    if(i<1)
    {
        cout<<x;
        return;
    }
    sum(i-1,x*i);

}

int main()
{
    int n;cin>>n;

    sum(n,1);
    return 0;
}
