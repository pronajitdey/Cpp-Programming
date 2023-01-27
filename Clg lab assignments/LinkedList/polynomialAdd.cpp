#include <iostream>
using namespace std;

class Node {
  public:
    int coeff;
    int exp;
    Node *next;

    Node(int coeff, int exp) {
      this -> coeff = coeff;
      this -> exp = exp;
      this -> next = NULL;
    }
};

class Polynomial {
  public:
    Node* create(Node *head, int coeff, int exp);
    Node* polyAdd(Node *p1, Node *p2, Node *sum);
    void display(Node *head);
};

Node* Polynomial::create(Node *head, int coeff, int exp) {
  Node *curr = new Node(coeff, exp);
  if (head == NULL) {
    head = curr;
  } else {
    Node *temp = head;
    while (temp -> next != NULL) {
      temp = temp -> next;
    }
    temp -> next = curr;
  }
  return head;
}

Node* Polynomial::polyAdd(Node *p1, Node *p2, Node *sum) {
  Node *poly1 = p1, *poly2 = p2;

  if (poly1 != NULL && poly2 == NULL) {
    sum = poly1;
    return sum;
  }
  
  if (poly1 == NULL && poly2 != NULL) {
    sum = poly2;
    return sum;
  }

  Node *res = new Node(0, 0);
  Node *last = res;
  while (poly1 != NULL && poly2 != NULL) {
    if (poly1 -> exp > poly2 -> exp) {
      last -> next = new Node(poly1 -> coeff, poly1 -> exp);
      last = last -> next;
      poly1 = poly1 -> next;

    } else if (poly1 -> exp < poly2 -> exp) {
      last -> next = new Node(poly2 -> coeff, poly2 -> exp);
      last = last -> next;
      poly2 = poly2 -> next;

    } else {
      last -> next = new Node(poly1 -> coeff + poly2 -> coeff, poly1 -> exp);
      last = last -> next;
      poly1 = poly1 -> next;
      poly2 = poly2 -> next;
    }
  }

  if (poly1 != NULL) {
    last -> next = poly1;
  } else if (poly2 != NULL) {
    last -> next = poly2;
  }

  return res -> next;
}

void Polynomial::display(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp -> coeff << "^" << temp -> exp;
    temp = temp -> next;
    if (temp != NULL) {
      cout << " + ";
    }
  }
  cout << endl;
}

int main() {
  Polynomial poly;
  Node *p1 = NULL, *p2 = NULL, *sum = NULL;

  int choice, coeff, exp;
  while (1) {
    cout << "1. Add to Polynomial 1" << endl;
    cout << "2. Add to Polynomial 2" << endl;
    cout << "3. Perform Addition" << endl;
    cout << "4. Exit" << endl;
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter co-efficient: ";
        cin >> coeff;
        cout << "Enter exponent: ";
        cin >> exp;
        p1 = poly.create(p1, coeff, exp);
        break;

      case 2:
        cout << "Enter co-efficient: ";
        cin >> coeff;
        cout << "Enter exponent: ";
        cin >> exp;
        p2 = poly.create(p2, coeff, exp);
        break;

      case 3:
        sum = poly.polyAdd(p1, p2, sum);
        cout << "Polynomial 1: ";
        poly.display(p1);
        cout << "Polynomial 2: ";
        poly.display(p2);
        cout << "Sum: ";
        poly.display(sum);
        break;

      case 4:
        return 0;

      default:
        cout << "Wrong Choice! Re-enter" << endl;
    }
  }
  return 0;
}