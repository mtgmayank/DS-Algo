#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node*next;

    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    // destructor
    ~Node(){
        int value=this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"MEMORY IS FREE FOR MODE WITH DATA"<< value << endl;

    }

};

void insertAtHead(Node* &head, int d){

    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail, int d){

    Node*temp=new Node(d);
    tail->next=temp;
    tail=tail->next; 
}

void insertatposition(Node* &head, int position, int d){

    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node*temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // creating a new node
    Node*nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;


}

void deleteNode(int position, Node*&head){
    // deleting first or start node
    if(position==1){
        Node*temp=head;
        head=head->next;
        // memory free karwana
        temp->next=NULL;
        delete temp;

    }
    else
    {
        // deletion of any middle or last node
        Node*curr=head;
        Node*prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev -> next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int main(){

    //craeted a new node
    Node*node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1
    Node*head=node1;
    Node*tail=node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail,15);
    print(head);
    

    insertatposition(head, 3, 22);
    print(head);
 
    insertatposition(head, 1, 69);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deleteNode(3, head);
    print(head);


    return 0;
    

}