#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memeory is free for node with data"<<value<<endl;
    }
};

void insertNode(Node*&tail, int element, int d){
    // assuming that element is prsent in the list
    if(tail==NULL){
        Node*newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        // element found->curr is rprsnting elmnt wla data
        Node*temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node*tail){
    Node*temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    } while(tail!=temp);
    cout<<endl;
}

int main(){
    Node*tail=NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 3, 9);
    print(tail);



    return 0;
}
