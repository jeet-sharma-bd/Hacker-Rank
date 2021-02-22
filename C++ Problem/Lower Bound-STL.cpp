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
  int q;

int m;
cin>>m;

          for(int j=0; j<m;j++)
          {
              cin>>q;
              auto low=lower_bound(vec.begin(), vec.end(), q);
              
              if(q == vec[low - vec.begin()])
              {
                  cout<<"Yes "<<(low - vec.begin()+1)<<endl;
              }
              else{
                  cout<<"No "<<(low - vec.begin()+1)<<endl;
              }
        
         }
    


    return 0;
}
