#include <iostream>
using namespace std;

// Creating a node
struct Node {
    public:
    int value;
    struct Node *next;
};

int main() {
  Node *head;
  Node *one = NULL;
  Node *two = NULL;
  Node *three = NULL;
  Node *four = NULL;

  // allocate 3 nodes in the heap
  one = new Node();
  two = new Node();
  three = new Node();
  four = new Node();

  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;
  four->value = 4;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = NULL;

  // print the linked list value
  head = one;
  /*while (head != NULL) {
    cout << head->value<< "\t";
    head = head->next;
  }
  cout<<endl;*/
  //insertion at front
  Node *newNode = new Node();
  newNode->value = 0;
  newNode->next = head;
  head = newNode;
  while (head != NULL) {
    cout << head->value<< "\t";
    head = head->next;
  }
}
