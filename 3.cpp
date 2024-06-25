#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data1,Node* next1,Node*prev1)
    {
        data=data1;
        next=next1;
        prev=prev1;
    }
};

Node* convertartoll(int a[4])
{
    Node* head= new Node(a[0],nullptr,nullptr);
    Node* prev=head;
    for(int i=1;i<4;i++)
    {
        Node* temp=new Node(a[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* reversedll(Node *head)
{
    if(head==nullptr || head->next==nullptr)
    {
        return head;
    }
    // Node* previ=nullptr;
    // Node* temp=head;
    // while(temp!=nullptr)
    // {
    //     previ=temp->prev;
    //     temp->prev=temp->next;
    //     temp->next=previ;
    //     temp=temp->prev;
    // }
    // return previ->prev;
    
    Node* t=nullptr;
    Node* h=head;
    while(h!=nullptr){
        h->prev=h->next;
        h->next=t;
        t=h;
        h=h->prev;
    }
    return t;
}

int main(){
    int arr[] ={1,2,3,4};
    Node* h=convertartoll(arr);

    Node* t=h;
    while(t!=nullptr){
        cout<<t->data<<" -> ";
        t=t->next;
    }cout<<endl;

    h=reversedll(h);
    
    t=h;
    while(t!=nullptr){
        cout<<t->data<<" -> ";
        t=t->next;
    }cout<<endl;
}