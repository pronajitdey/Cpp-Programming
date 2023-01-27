#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    int priority;
    Node *next;

    Node(int data, int priority) {
      this -> data = data;
      this -> priority = priority;
      this -> next = NULL;
    }
};

class PriorityQueue {
  Node *head;

  public:
    void push(int d, int p) {
      Node *cur = new Node(d, p);
      if (head == NULL) {
        head = cur;
        return;
      }
      if (head -> priority > p) {
        cur -> next = head;
        head = cur;
        return;
      }
      Node *temp = head;
      while (temp -> next != NULL && temp -> next -> priority < p) {
        temp = temp -> next;
      }
      cur -> next = temp -> next;
      temp -> next = cur;
    }

    bool isEmpty() {
      if (head == NULL) {
        return true;
      }
      return false;
    }

    void pop() {
      if (!isEmpty()) {
        Node *temp = head;
        head = head -> next;
        cout << "Popped " << temp -> data << endl;
        delete temp;
      }
    }

    void display() {
      Node *temp = head;
      while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
      }
      cout << endl;
    }
};

int main() {
  PriorityQueue pq;
  pq.push(7, 2);
  pq.push(2, 0);
  pq.push(5, 1);
  pq.display();
  pq.pop();
  pq.display();
}