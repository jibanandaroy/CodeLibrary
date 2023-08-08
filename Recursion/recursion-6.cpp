#include<bits/stdc++.h>

using namespace std;
void reverseArray(int arr[], int i,int j)
{
        if(i>j)
        {
            return;
        }
        swap(arr[i],arr[j]);

    reverseArray(arr,i+1,j-1);
}

int main()
{

    int n=5;
    int arr[] = {1,2,3,4,5};
    reverseArray(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
