#include <bits/stdc++.h>

using namespace std;

int main()
{
    //initialized empty vector of integers
    vector<int>v1;
    //vector of integers with 5 elements initialized to 0
    vector<int>v2(5);
    //vector of integers with 5 elements initialized to 10
    vector<int>v3(5,10);
    //vector initialized with an initialized list
    vector<int>v4={1,2,3,4,5};


    //adding element into the vector
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    //Accessing elements
    cout<<"Element at index 0:"<<v1[0]<<endl;
    cout<<v1.at(2);//Bounds checked access

    cout<<endl;
    cout<<endl;
    //using range-based for loop
    for(int value:v4){
        cout<<value<<endl;
    }



    cout<<endl;
    cout<<endl;
    //using iterator
    for(auto it = v4.begin(); it!=v4.end(); ++it){
        cout<<*it<<endl;
    }

    cout<<endl;
    cout<<endl;
    vector<int>v5{1,2,3,4,5};
    //removing the last element
    v5.pop_back();
    for(auto it = v5.begin(); it!=v5.end(); ++it){
        cout<<*it<<endl;
    }

    cout<<endl;
    cout<<endl;

    //removing specific elements
    v5.erase(v5.begin()+1);
    for(auto it = v5.begin(); it!=v5.end(); ++it){
        cout<<*it<<endl;
    }

    //clear all elements
    v5.clear();
    for(auto it = v5.begin(); it!=v5.end(); ++it){
        cout<<*it<<endl;
    }

    cout<<endl;
    cout<<endl;

    //capacity and size
    vector<int>v6={1,2,3,4,5};
    cout<<v6.size()<<endl;
    cout<<v6.capacity()<<endl;

    //reserving space
    v6.reserve(10);
    cout<<v6.capacity();


    cout<<endl;
    cout<<endl;

    vector<int>v7={1,2,3};
    //insert single element
    v7.insert(v7.begin()+1,4);
    for(auto it = v7.begin(); it!=v7.end(); ++it){
        cout<<*it<<endl;
    }

    cout<<endl;
    cout<<endl;
    //insert multiple elements
    v7.insert(v7.end(),2,5);
    for(auto it = v7.begin(); it!=v7.end(); ++it){
        cout<<*it<<endl;
    }


    cout<<endl;
    cout<<endl;
    //insert elements from another container
    vector<int>v8={6,7};
    v7.insert(v7.end(),v8.begin(),v8.end());
    for(int value:v7){
        cout<<value<<" ";
    }

    cout<<endl;
    cout<<endl;

    //sorting the element
    vector<int>v9={4,3,6,3,5,7};
    sort(v9.begin(),v9.end());
    for(int value:v9){
        cout<<value<<" ";
    }

    return 0;
}
