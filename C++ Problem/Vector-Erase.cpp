#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  vector<int>vec;
  int n;
  int k;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>k;
      vec.push_back(k);
  }  
  int x,a,b;
  cin>>x>>a>>b;
vec.erase(vec.begin()+x-1);
vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);
  
  cout<<vec.size()<<endl;
  vector<int>::iterator it;
  for(it=vec.begin();it<vec.end();it++){
      cout<<*it<<" ";
  }
  cout<<endl;
  
    return 0;
}
