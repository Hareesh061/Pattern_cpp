#include<iostream>
using namespace std;

struct Node{
    
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = nullptr;
    }
};

void print(Node* head){
    while(head!= nullptr){
        cout<<head->data;
        if(head->next!= nullptr)cout<<"->";
        head = head->next;
    }
}


Node* deleteE(Node* head){
    
    if(head == nullptr) return nullptr;
    
    if(head->next == nullptr){
        delete head;
        return nullptr;
    }
    
    
    Node* temp= head;
     while(temp->next->next != nullptr){
         temp= temp->next;
     }
     delete temp->next;
     
     temp->next = nullptr;
     
     
   return head;
}

int main(){
    Node* head = new Node(1);
    
    head->next = new Node(2);
    
    head->next->next = new Node(3);
    
    print(head);
    
    head = deleteE(head);
    cout<<endl;
    print(head);
}