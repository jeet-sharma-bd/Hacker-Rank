#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

void display(struct Node* head, int p){
    
         if(head->next!= NULL ){
                int i=1;
            while(i != p){
                head=head->next;
                i++;
            }
        
        }
            cout<<head->data<<endl;
}

void createNode(Node* head, int t){
    int a;
    cin>>a;
        
    head->data=a;
    head->next=NULL;        
        
        for(int i=2;i<=t;i++){
            struct Node* ptr=new Node();
            cin>>a;
            ptr->data=a;
            ptr->next=NULL;
            
            head->next=ptr;
            head=head->next;
        }
}

int main(){

int t,t2;
int x;
cin>>x;
for(int i=0;i<x;i++){
struct Node* head=new Node();
int p;
    cin>>t;
    createNode(head,t);
    cin>>p;
    display(head,abs(t-p));
    
             

}




    
    

}
