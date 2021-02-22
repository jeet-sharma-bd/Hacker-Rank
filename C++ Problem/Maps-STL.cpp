#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n, type,y;
    cin >> n; 
    map<string,int> m;
    
    string x;
    for (int i=0; i<n; ++i)
    {
        cin >> type >> x;
        if (type == 1){
            cin >> y;
            m[x] += y;
        }
        else if (type == 2)
            m.erase(x);
        else
            cout << m[x] <<endl;
    }
    return 0;
}
