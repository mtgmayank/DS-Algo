#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node*head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}

void insertAtHead(Node*&head, int d){
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}


void insertatTail(Node*&tail, int d){
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}


void inseratPosition(Node*&tail, Node*&head, int position, int d){
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    Node*temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next=NULL){
        insertatTail(tail, d);
        return;
    }

    Node*nodetoInsert=new Node(d);

    nodetoInsert->next=temp->next;
    temp->next->prev=nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;
}





int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    print(head);

    insertAtHead(head, 16);
    print(head);

    insertAtHead(head, 20);
    print(head);

    insertatTail(tail,69);
    print(head);

    insertatTail(tail, 96);
    print(head);

    inseratPosition(tail, head, 2, 8);
    print(head);


    return 0;
}