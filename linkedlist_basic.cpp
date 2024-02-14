#include <iostream>
using namespace std;
struct Node {
   int data;
   Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void addNode(int data) {
   // Create a new node
   Node* newNode = new Node;
   newNode->data = data;
   newNode->next = nullptr;

   if (head == nullptr) {
       head = newNode;
       tail = newNode;
   } else {
       tail->next = newNode;
       tail = newNode;
   }
}

void display() {
   Node* current = head;

   if (head == nullptr) {
       cout << "List is empty\n";
       return;
   }

   cout << "Nodes of singly linked list: \n";
   while (current != nullptr) {
       cout << current->data << " ";
       current = current->next;- }
   cout << endl;
}

int main() {
   // Add nodes to the list
   addNode(1);
   addNode(2);
   addNode(3);
   addNode(4);

   display();
   return 0;
}
