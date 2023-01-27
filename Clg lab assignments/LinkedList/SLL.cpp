#include <iostream>
using namespace std;

class SLL {
  class Node {
    public:
    int val;
    Node *next;

      Node(int val) {
        this -> val = val;
        this -> next = NULL;
      }
  };

  Node *head;
  Node *tail;
  int size;

  public:
    SLL() {
      head = tail = NULL;
      size = 0;
    }

    void insertFirst(int item);
    void insertLast(int item);
    void deleteFirst();
    void deleteLast();
    void display();
    void search(int x);
    void reverse();
};

void SLL::insertFirst(int item) {
  Node *curr = new Node(item);
  curr -> next = head;
  head = curr;
  if (tail == NULL) {
    tail = head;
  }
  size++;
}

void SLL::insertLast(int item) {
  Node *curr = new Node(item);
  if (tail == NULL) {
    insertFirst(item);
    return;
  }
  tail -> next = curr;
  tail = curr;
  size++;
}

void SLL::deleteFirst() {
  if (head == NULL) {
    cout << "Empty linked list" << endl;
    return;
  }
  Node *temp = head;
  head = head -> next;
  if (head == NULL) {
    tail = NULL;
  }
  size--;
  cout << "Deleted " << temp -> val << endl;
  delete temp;
}

void SLL::deleteLast() {
  if (head == NULL) {
    cout << "Empty linked list" << endl;
    return;
  }
  if (size == 1) {
    deleteFirst();
    return;
  }
  Node *secondLast = head;
  while (secondLast -> next != tail) {
    secondLast = secondLast -> next;
  }
  int data = tail -> val;
  Node *temp = tail;
  tail = secondLast;
  tail -> next = NULL;
  size--;
  cout << "Deleted " << temp -> val << endl;
  delete temp;
}

void SLL::display() {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp -> val;
    temp = temp -> next;
    if (temp != NULL) {
      cout << " -> ";
    }
  }
  cout << endl;
}

void SLL::search(int x) {
  Node *temp = head;
  while (temp != NULL) {
    if (temp -> val == x) {
      cout << x << " found\n";
      return;
    }
    temp = temp -> next;
  }
  cout << x << " not found\n";
}

void SLL::reverse() {
  if (head == NULL) return;
  Node *p = head, *q = NULL, *r = NULL;
  while (p != NULL) {
    q = p;
    p = p -> next;
    q -> next = r;
    r = q;
  }
  head = q;
}

int main() {
  SLL ll;
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

  ll.search(30);
  ll.search(10);

  ll.reverse();
  ll.display();
}