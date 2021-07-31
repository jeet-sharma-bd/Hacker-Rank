#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

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

void display(Node* head){
    while(head  != NULL){
    cout<<head->data<<" ";
    head=head->next;
}
cout<<endl;
}


int main(){
struct Node* head=new Node();
int t,x;
cin>>t;
createNode(head,t);

display(head);

}
