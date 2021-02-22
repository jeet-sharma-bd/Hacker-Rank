#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    
  set<int>s;
  
  int x,y,n;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>y>>x;
      if(y==1){
          s.insert(x);
      }else if(y==2){
          s.erase(x);
      }else if(y==3){
          cout<<(s.find(x) == s.end() ?"No":"Yes")<<endl;
      }
  }  
 

    return 0;
}
