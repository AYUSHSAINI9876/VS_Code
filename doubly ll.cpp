#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node (int val){
        data=val;
        next=prev=NULL;
    }
};
class doublylist{
   Node*head;
   Node*tail;
   public:
   doublylist(){
    head=tail=NULL;
   }
   void push_front(int val){
        Node* newnode=new Node (val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    void print(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};


int main(){
doublylist dll;
dll.push_front(1);
dll.push_front(2);
dll.push_front(3);
dll.print();
return 0;
}