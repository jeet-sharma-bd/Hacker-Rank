#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};

void display(Node* head){

		while(head  != NULL ){
				cout<<head->data<<" ";
				head=head->next;
		}
}

void createNode(Node* head, int t){
	int a;
	cin>>a;		
	head->data=a;
	head->next=NULL;		
		
		for(int i=2;i<=t;i++){
			int b;
			struct Node* ptr=new Node();
			cin>>b;
			
			if(a!=b){// check node value when add next node because it's sorted
				ptr->data=b;
				ptr->next=NULL;
				head->next=ptr;
				head=head->next;
				a=b;
			}
		
		}
}

int main(){
struct Node* head=new Node();
int t,t2;
int x;
cin>>x;
for(int i=0;i<x;i++){

	cin>>t;
	createNode(head,t);
	display(head);
	cout<<endl;
	
}
	         

}
