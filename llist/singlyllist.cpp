#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~node(){
        int value=this->data;

        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }

        cout<<"memory freed for node "<<value<<endl;
    }
};

void insertAtHead(node* &head,int d){

   node* temp= new node(d);
   temp->next=head;
   head=temp;
}

void insertAtTail(node* &tail,int d){
    node* temp=new node(d);

    tail->next=temp;
    tail=temp;
}

void print(node* &head){

    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
    cout<<endl;
}
void insertAtPos(int pos,node* &head,node* &tail,int d){
    int count=1;
    node* temp=head;

    if(pos==1) {
        insertAtHead(head,d);
        return;
    }

    while(count<pos-1){
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    node *newnode=new node(d);

    newnode->next=temp->next;
    temp->next=newnode;
}

int length(node* &head){

    node* temp=head;
    int l=0;
    
    while(temp!=NULL){
        l++;
    }

    return l;
} 

void deletenode(int pos,node* &head){
    if(pos==1){

        node* curr=head;
        head=head->next;
        curr->next=NULL;
        delete curr;
        return ;

    }

    int count=1;
    node* prev=NULL;
    node* curr=head;

    while(count<pos){
        prev=curr;
        curr=curr->next;
        count++;
    }

    if(curr->next==NULL){
        prev->next=NULL;
        delete curr;
        return ;
    }
    
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

}


int main(){

node* node1=new node(10);

node* head=node1;
node* tail=node1;

print(head);

insertAtHead(head,5);
print(head);

insertAtTail(tail,11);
print(head);

insertAtPos(4,head,tail,22);
print(head);
// cout<<length(head);

deletenode(4,head);
print(head);
// cout<<head;


}

