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

Node* deleteF(Node* head){
    if(head == nullptr) return nullptr;

    Node* temp = head;
    head = head->next;

    if(head!= nullptr){
        head->prev = nullptr;
    }
    delete temp;

    return head;
   
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

    head = deleteF(head);

    cout<<endl;
    print(head);

    return 0;
}

