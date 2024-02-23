#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(){
        data=0;
        next=NULL;

    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Linkedlist{
    Node *head;
    public:
    Linkedlist(){
        head=NULL;
        }
        void insertNode(int,int);
        void printList();
        void deleteNode(int);
};
void Linkedlist::insertNode(int data,int position=0 ){
    Node* newNode = new Node(data);
    Node* temp1,*temp2;
    int ListLen;

    if(head ==NULL){
        head =newNode;
        return;
    }
    Node* temp=head;
    temp1=head;
    if(position ==0){
          while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next =newNode;
    }
    if(position != 0){

           while(position-- > 1){
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=newNode;
    newNode->next=temp1;
    }
  
}
void Linkedlist::printList(){
    Node* temp =head;
    if(head == NULL ){
        cout<<"the list is empty"<<endl;
        return;
    }
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void Linkedlist::deleteNode(int nodeofset){
    Node *temp1=head,*temp2=NULL;
    int ListLen =0;
    if(head == NULL){
       cout<<"list is empty"<<endl;
    }
    while(temp1 != NULL){
        temp1=temp1->next;
        ListLen++;
    }
    if( ListLen < nodeofset){
        cout<<"index out of range"<<endl;

    }
    temp1=head;
    if(nodeofset == 1 ){
        head=head->next;
        delete temp1;
        return;
    }
    while(nodeofset-- > 1){
        temp2=temp1;
        temp1=temp1->next;

    }
    temp2->next=temp1->next;
    delete temp1;



}
int main(){
    Linkedlist lisa;
    lisa.insertNode(2);
    lisa.insertNode(3);
    lisa.insertNode(4);
    lisa.insertNode(5);
    lisa.insertNode(6);
    lisa.insertNode(7);
    lisa.insertNode(8);
    lisa.insertNode(9);
    lisa.printList();
    cout<<endl;
     lisa.insertNode(99,4);
     lisa.printList();
    cout<<endl;
    lisa.deleteNode(1);
    lisa.deleteNode(4);
    lisa.printList();
    return 0;
}