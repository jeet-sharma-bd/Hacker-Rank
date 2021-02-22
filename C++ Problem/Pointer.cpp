#include <iostream>
using namespace std;
void update(int *a,int *b) {
    int r,t;
    r=*a+*b;
     
     if(*b>*a){
         t=*b-*a;
     }else{
         t=*a-*b;
     }
    a=&r;
    b=&t;
printf("%d\n%d", *a, *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    

    return 0;
}
