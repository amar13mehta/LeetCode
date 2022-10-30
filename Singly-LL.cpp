#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

void insertAtHead(Node* &head, int d){
    //create a new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtEnd(Node* &end, int d){
    Node* temp = new Node(d);
    end -> next = temp;
    end  = end ->next;

}

void insertAtposition(Node* &end,Node* &head,int posi ,int d){
    Node* temp = head;
    //inserting at start
    if(posi ==1){
        insertAtHead(head,d);
        return;
    }

    //inserting at other posi
    int cnt=1;
    while(cnt < posi-1){
        temp = temp -> next;
        cnt++;
    }


      //inserting  end
    if(temp -> next == NULL){
        insertAtEnd(end,d);
        return;
    }
    

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;
}
  

void printLL(Node* &head){
    Node* temp = head;
    while(temp !=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    } 
    cout<<endl;
}


int main(){
    // int n ; 
    // cin>>n;

    Node* node1 = new Node(10);

    //cout<< node1 -> data<<endl;
    //cout<< node1 -> next<<endl;

    Node* head = node1;
    Node* end = node1;
    printLL(head);

    // insertAtHead(head,12);
    // printLL(head);

    // insertAtHead(head,15);
    // printLL(head);

    insertAtEnd(end,12);
    printLL(head);   

    insertAtEnd(end,15);
    printLL(head); 

    insertAtposition(end,head,4,17);
    printLL(head); 

    cout<<"Head "<<head -> data<<endl;
    cout<<"End "<<end -> data<<endl;


    return 0;
}