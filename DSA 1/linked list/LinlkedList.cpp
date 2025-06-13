#include <iostream>
using namespace std;
#include "node.cpp"

Node* reverseLL_3(Node *head) {
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node *smallAns = reverseLL_3(head -> next);

    Node *tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return smallAns;
}


class Pair {
    public :
        Node *head;
        Node *tail;
};

Pair reverseLL_2(Node *head){
    if(head == NULL || head -> next == NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;

    }

    Pair smallAns = reverseLL_2(head -> next);

    smallAns.tail -> next = head;
    head -> next = NULL;
    Pair ans;
    ans.head = smallAns.head;
    ans.tail= head;
    return ans;
}

Node* reverseLL_Better(Node *head) {
    return reverseLL_2(head).head;
}


Node* reverseLL(Node *head) {
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node *smallAns = reverseLL(head -> next);

    Node *temp = smallAns;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = head;
    head -> next = NULL;
    return smallAns;
}

// Node* takeInput() {
//     int data;
//     cin >> data;
//     Node *head = NULL;
//     while(data != -1) {
//        // Node n(data);            // statically allocate

//        Node *newNode = new Node(data);     //Dynamically
//         if(head == NULL) {
//             //head = &n;         //Statically

//             head = newNode;      //Dynamically
//         }
//         else{
//             //head -> next = newNode;
//             Node *temp = head;
//             while(temp -> next != NULL){
//                 temp = temp -> next;
//             }
//             temp -> next = newNode;
//         }
//         cin >> data;
//     }
//     return head;
// }

Node* takeInput_Better() {
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1) {
       // Node n(data);            // statically allocate

       Node *newNode = new Node(data);     //Dynamically
        if(head == NULL) {
            //head = &n;         //Statically

            head = newNode;      //Dynamically
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail -> next;
            //OR
            //tail = newNode;
        }
        cin >> data;
    }
    return head;
}


Node* insertNode(Node *head, int i , int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    if(i == 0){
        newNode -> next = head;
        head = newNode;
        return head;
    }

    while(temp != NULL && count < i - 1){
        temp = temp -> next;
        count ++;
    }
    if(temp != NULL){
        Node *a = temp -> next;
        temp->next = newNode;
        newNode -> next = a;
    }
    return head;
}

void print(Node *head) {
    //Node *temp = head;

    while(head  != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }

   /* temp = head;
    while(temp  != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }*/

    // while(head  != NULL) {
    //     cout << head -> data << " ";
    //     head = head -> next;
    // }
}



int main() {

    Node *head = takeInput_Better();
    print (head);

    int i , data;
    cin >> i >> data;
    head = insertNode(head , i , data);
    print(head);

    head = reverseLL(head);
    print(head);

    head = reverseLL_Better(head);
    print(head);

    head = reverseLL_3(head);
    print(head);


/*

    //Statically
    Node n1(1);
    Node *head = &n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);
    print(head);
*/

/*
    n1.next = &n2;

    cout << n1.data << " " << n2.data << endl;

    //Dynamically

    Node *n3 = new Node(10);
    Node *head = n3;
    Node *n4 = new Node(20);
    n3 -> next = n4;

    */


}
