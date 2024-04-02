#include <iostream>
using namespace std;

// 5223600017_Daffa Rifqi Arrazzaq

struct Node{
    int data;
    Node* prev;
    Node* next;
};
// 1. Menyisipkan sebagai simpul ujung(awal) dari linked list.
void insertNode(Node*& head, Node*& tail, int data){
    Node* n=new Node();
    n->data=data;

    if(head==nullptr){
        n->next=nullptr;
        n->prev=nullptr;
        head=n;
        tail=n;
    }else{
        n->next=head;
        head->prev=n;
        head=n;
    }
}
// 2. Membaca atau menampilkan

// Menampilkan LIFO
void tampil(Node* head){
    Node* temp = head; 
    cout<<"Tampilan LIFO  : ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
// Menampilkan FIFO
void tampilFIFO(Node* tail){
    Node* temp = tail;
    cout<<"Tampilan FIFO  : ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main(){
    Node* head=nullptr;
    Node* tail=nullptr;

    insertNode(head,tail, 20);
    insertNode(head,tail, 40);
    insertNode(head,tail, 60);
    insertNode(head,tail, 80);
    insertNode(head,tail, 100);
    insertNode(head,tail, 120);
    
    tampil(head);
    tampilFIFO(tail);

    return 0;

}