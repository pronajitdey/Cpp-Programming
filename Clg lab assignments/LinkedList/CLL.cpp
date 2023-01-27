#include <iostream>
using namespace std;

class Node {
  public:
    int val;
    Node *next;

    Node(int val) {
      this -> val = val;
      this -> next = NULL;
    }
};

class CLL {
  Node *head;
  Node *tail;

  public:
    CLL() {
      head = tail = NULL;
    }

    void insertFirst(int item);
    void insertLast(int item);
    void deleteFirst();
    void deleteLast();
    void display();
};

void CLL::insertFirst(int item) {
  Node *curr = new Node(item);
  if (head == NULL) {
    head = tail = curr;
    curr -> next = curr;
    return;
  }
  tail -> next = curr;
  curr -> next = head;
  head = curr;
}

void CLL::insertLast(int item) {
  Node *curr = new Node(item);
  if (head == NULL) {
    head = tail = curr;
    return;
  }
  tail -> next = curr;
  curr -> next = head;
  tail = curr;
}

void CLL::deleteFirst() {
  if (head == NULL) {
    cout << "Empty linked list\n";
    return;
  }
  Node *temp = head;
  head = head -> next;
  if (head == temp) {
    cout << "Deleted " << head -> val << endl;
    delete head;
    head = tail = NULL;
    return;
  }
  tail -> next = head;
  cout << "Deleted " << temp -> val << endl;
  delete temp;
}

void CLL::deleteLast() {
  if (head == NULL) {
    cout << "Empty linked list\n";
    return;
  }
  if (head -> next == head) {
    cout << "Deleted " << head -> val << endl;
    delete head;
    head = tail = NULL;
    return;
  }
  Node *temp = tail;
  Node *secondLast = head;
  while (secondLast -> next != tail) {
    secondLast = secondLast -> next;
  }
  tail = secondLast;
  tail -> next = head;
  cout << "Deleted " << temp -> val << endl;
  delete temp;
}

void CLL::display() {
  if (head == NULL) return;
  Node *temp = head;
  while (temp != tail) {
    cout << temp -> val << " -> ";
    temp = temp -> next;
  }
  cout << temp -> val << endl;
}

int main() {
  CLL ll;

  ll.insertFirst(10);
  ll.insertFirst(0);
  ll.insertFirst(16);
  ll.insertFirst(30);

  ll.display();

  ll.deleteFirst();
  ll.display();

  ll.insertLast(15);
  ll.insertLast(35);
  ll.display();

  ll.deleteLast();

  ll.display();
  ll.deleteLast();
  ll.deleteLast();
  ll.deleteFirst();

  ll.deleteLast();
  ll.deleteLast();
  ll.deleteFirst();

}