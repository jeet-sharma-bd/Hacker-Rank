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
			struct Node* ptr=new Node();
			cin>>a;
			ptr->data=a;
			ptr->next=NULL;
			
			head->next=ptr;
			head=head->next;
		}
}
int k=0;
void sort(Node* head,int n){
	struct Node* ptr=head->next;
	int x=n-1;
	while(x--){
		if(head->data > ptr->data){
			swap(head->data,ptr->data);
			
		}
		head=head->next;
		ptr=ptr->next;
	}
}

void Insert_in_One(Node* head,Node* head2,int t, int t2){
	struct Node* ptr=head2;
	
	if(t==1){
		
	}else{
		while(head->next!=NULL){
			head=head->next;
		}
	}
	
	
	if(t2==1){
		head->next=ptr;
		head=head->next;
	}else{
		while(ptr->next != NULL){
			head->next=ptr;
			ptr=ptr->next;
			head=new Node();
			
		}
	}
	
	
	head->next=NULL;
		
}
void Delete(struct Node* ptr){
	struct Node* next=NULL;
	while(ptr!= NULL){
		next=ptr->next;
		free(ptr);
		ptr=next;
	}
}
int main(){

int t,t2;
int x;
cin>>x;
for(int i=0;i<x;i++){
struct Node* head=new Node();
struct Node* head2=new Node();

	cin>>t;
	createNode(head,t);
	cin>>t2;
	createNode(head2,t2);
	
	Insert_in_One(head,head2,t,t2);
	
	for(int i=0;i<t+t2;i++){
		sort(head,t+t2);
	}
	
	display(head);
	cout<<endl;
	         

}


}

