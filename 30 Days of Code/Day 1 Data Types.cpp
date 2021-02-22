#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

  int j;   double e;
    cin>>j; cin>>e;
 double su=d+e;
    string t;
    cin.ignore(); getline(cin,t);

    cout<<i+j<<endl;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(1);
    std::cout<<su<<endl;
    cout<<s+t<<endl;

    
    return 0;
}