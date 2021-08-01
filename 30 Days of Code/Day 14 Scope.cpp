#include<bits/stdc++.h>
using namespace std;

int main(){
int t,x=0,m=0,k;
cin>>t;
int arr[t];

	for(int i=0;i<t;i++){
		cin>>arr[i];	
	}
		
	for(int j=0;j<t-1;j++){
		for(k=j+1;k<t;k++){
			x=abs(arr[j]-arr[k]);
			m=max(x,m);
		
		}
	}
		cout<<m<<endl;
}
