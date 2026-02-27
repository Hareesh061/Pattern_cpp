#include<iostream>
using namespace std;

struct Node{
    public:
        int data;
        Node* next;
        Node* prev;
        
        Node(int val){
            data = val;
            next, prev = nullptr;
        }
};


void print(Node* head){
    while(head!=nullptr){
        cout<<head->data;
        if(head->next!=nullptr) cout<<"<->";
        head = head->next;
    }
    cout<<endl;
}

Node* deleteE(Node* head){
    if(head == nullptr) 
    {
        return nullptr;
    }
    if(head->next == nullptr){
        delete head;
        return nullptr;
    }
    
    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    
    temp->prev->next = nullptr;
    
    delete temp;
    return head;
        
}

int main(){
    
    Node* head = new Node(1);
    
    head->next = new Node(2);
    head->next->prev = head;
    
    
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    
    
    print(head);
    head = deleteE(head);
    print(head);
    
    
}