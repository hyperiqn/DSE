#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
void insertAtEnd(int d){
    Node* new_node = new Node();
    new_node->data = d;
    new_node->next = NULL;
    Node* last = head;
    if(head==NULL){
        head = new_node;
        return;
    }
    while(last->next!=NULL)
        last = last->next;
    last->next = new_node;
}
void insertAtBeginning(int d){
    Node* new_node = new Node();
    new_node->data = d;
    new_node->next = head;
    head = new_node;
}
void insertBefore(int val,int d){
    Node* new_node = new Node();
    new_node->data = d;
    if(head == NULL){
        cout<<"invalid"<<endl;
        return;
    }
    if(head->data == val){
        new_node->next = head;
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL && temp->next->data != val)
        temp = temp->next;
    if(temp->next != NULL){
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
void insertAfter(int val,int d){
    Node* new_node = new Node();
    new_node->data = d;
    if(head == NULL){
        cout<<"invalid"<<endl;
        return;
    }
    if(head->data == val){
        new_node == head;
        head == new_node;
        return;
    }
    Node* temp = head;
    while(temp!=NULL && temp->data != val)
        temp = temp->next;
    if(temp!=NULL){
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
void deleteNode(int key) {
   Node* temp = head, *prev;

   if (temp != NULL && temp->data == key) {
      head = temp->next;
      delete temp;
      return;
   }

   while (temp != NULL && temp->data != key) {
      prev = temp;
      temp = temp->next;
   }

   if (temp == NULL) return;

   prev->next = temp->next;

   delete temp;
}
void printList(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main() {
   int choice, data, element;

   do {
      cout << "\n1.Insert at beginning\n2.Insert at end\n3.Insert before an element\n4.Insert after an element\n5.Delete an element\n6.Print list\n7.Exit\n";
      cin >> choice;

      switch(choice) {
         case 1:
            cout << "Enter the data to be inserted at the beginning: ";
            cin >> data;
            insertAtBeginning(data);
            break;

         case 2:
            cout << "Enter the data to be inserted at the end: ";
            cin >> data;
            insertAtEnd(data);
            break;

         case 3:
            cout << "Enter the element before which the data is to be inserted: ";
            cin >> element;
            cout << "Enter the data to be inserted: ";
            cin >> data;
            insertBefore(element, data);
            break;

         case 4:
            cout << "Enter the element after which the data is to be inserted: ";
            cin >> element;
            cout << "Enter the data to be inserted: ";
            cin >> data;
            insertAfter(element, data);
            break;

         case 5:
            cout << "Enter the element to be deleted: ";
            cin >> data;
            deleteNode(data);
            break;

         case 6:
            printList();
            break;

         case 7:
            exit(0);

         default:
            cout << "Invalid choice!";
      }
   } while(choice != 7);

   return 0;
}
