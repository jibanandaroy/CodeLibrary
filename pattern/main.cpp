#include <bits/stdc++.h>

using namespace std;
void pattern1(int n){

    for(int i=0; i<n; i++)
    {
        //space
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0; j<=n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=n; i>0; i--)
    {
        //space
        for(int j=n; j>i; j--)
        {
            cout<<" ";
        }
        //star
        for(int j=i*2-1; j>0; j--)
        {
            cout<<"*";
        }
        //space
        for(int j=n; j>i; j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=0; i<=n*2-1; i++)
    {
        int star = i;
        if(i>n) star=n*2-i;
        for(int j=0; j<star; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=0; i<n; i++)
    {
        int start = 1;
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++)
        {
            cout<<start;
            start = 1-start;
        }
        cout<<endl;

    }
}
void pattern5(int n){
    for(int i=1; i<=n; i++)
    {
        //numbers
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        //space
        for(int j=1; j<=n*2-i*2; j++)
        {
            cout<<" ";
        }

        //numbers
        for(int j=i; j>=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern6(int n){
    int start = 1;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=i; j++)
        {
            cout<<start;
            start+=1;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0; i<n; i++)
    {
        for(char ch='A'; ch<='A'+i; ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern8(int n){
    char start = 'A';
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<start;

        }
        cout<<endl;
        start=start+1;
    }
}
void pattern9(int n){
    char ch='A';
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cout<<" ";
        }
        for(char j=ch; j<='A'+i; j++)
        {
            cout<<j;
        }

        for(char j=ch+i-1; j>='A'; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern10(int n){
    char ch = 'E';
    for(int i=0; i<n; i++)
    {
        for(char j=ch-i; j<=ch; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=1; i<=n; i++)
    {
        //numbers
        for(int j=n; j>=i; j--)
        {
            cout<<"*";
        }
        //space
        for(int j=1; j<=i*2-2; j++)
        {
            cout<<" ";
        }

        //numbers
        for(int j=n; j>=i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    int sp=8;
    for(int i=1; i<=n; i++)
    {
        //star

        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1; j<=sp; j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        sp-=2;
        cout<<endl;
    }
}
void pattern12(int n){
    int sp=8;
    for(int i=1; i<=n; i++)
    {
        //star

        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1; j<=sp; j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        sp-=2;
        cout<<endl;
    }
    int sp2=2;
    for(int i=n; i>1; i--)
    {
        //star
        for(int j=i-1; j>=1; j--)
        {
            cout<<"*";
        }
        //space
        for(int j=1; j<=sp2; j++)
        {
            cout<<" ";
        }
        //star
        for(int j=i-1; j>=1; j--)
        {
            cout<<"*";
        }
        sp2+=2;
        cout<<endl;
    }
}
void pattern13(int n){
    for(int i=0; i<n; i++)
    {
        //star
        for(int j=0; j<n; j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
            else
                cout<<" ";

        }
        cout<<endl;//space

        //star
    }
}
void pattern14(int n){
    for(int i=0; i<n*2-1; i++)
    {
        for(int j=0; j<n*2-1; j++)
        {
            int top=i;
            int left=j;
            int right=(n*2-2)-j;
            int bottom=(n*2-2)-i;
            cout<<n-min(min(top,left),min(right,bottom));
        }
        cout<<endl;

    }
}
int main()
{
    int n; cin>>n;

    //pattern1(n);
    //pattern2(n);
    //pattern3(n);
    //pattern4(n);
    //pattern5(n);
    //pattern6(n);
    // pattern7(n);
    //pattern8(n);
    //pattern9(n);
    //pattern10(n);
    //pattern11(n);
    //pattern12(n);
    //pattern13(n);
    pattern14(n);
    return 0;
}
