#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec;
    int n;
    int a;
    cin>>n;
    
    for(int i=0;i<n;i++)
        {
            cin>>a;
            vec.push_back(a);
        }   
        vector<int>::iterator it;
        
        sort(vec.begin(),vec.end());
        for(it=vec.begin();it<vec.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    return 0;
}
