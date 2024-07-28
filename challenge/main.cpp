#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>vec={1,2,3,4,5};
    for(auto it=vec.end()-1; it!=vec.begin()-1; --it){
        cout<<*it<<endl;
    }
    return 0;
}
