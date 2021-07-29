#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll n,m;
cin>>n>>m;

    ll a,b,k,g=0;
vector<ll>vec(n+1,0);
for(int i=0;i<m;i++){
cin>>a>>b>>k;
    vec[a-1]+=k;
    vec[b]-=k;
}
ll l=0;
for(int i=0;i<n;i++){
	l+=vec[i];
	g=max(g,l);
}

cout<<g<<endl;

return 0;
}
