#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }

};

Node* insertF(Node* head, int d){

    Node* new_node = new Node(d);

    new_node->next = head;

    if(head!=nullptr){
        head->prev = new_node;
    }
    return new_node;
}


void print(Node*  head){
    while(head!= nullptr){
        cout<<head->data;

        if(head->next != nullptr)cout<<"<->";
        head = head->next;
    }
}


int main(){

    Node* head = new Node(2);

    head->next = new Node(3);
    head->next->prev = head;

    head->next->next = new Node(4);
    head->next->next->prev = head->next;

    print(head);

    int data = 1;
    head = insertF(head,data);
    cout<<endl;
    print(head);

    return 0;
}

