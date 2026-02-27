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

Node* insertE(Node* head, int new_data){
    
    Node* new_node = new Node(new_data);
    
    if(head == nullptr){
        head = new_node;
    }
    else{
        Node* temp = head;
        while(temp->next!=nullptr){
            temp= temp-> next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
    return head;
}



int main(){
    
    Node* head = new Node(1);
    
    head->next = new Node(2);
    head->next->prev = head;
    
    
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    
    
    print(head);
    
    int d = 5;
    
    head = insertE(head,d);
    
    print(head);
    
    
}