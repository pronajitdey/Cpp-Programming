// array implementation of stack
#include <iostream>
using namespace std;

class Stack {
  int *arr;
  int size;
  int top;

  public:
    Stack() {
      size = 10000;
      arr = new int[size];
      top = -1;
    }

    void isFull() {
      if (top == size) {
        cout << "Stack is Full\n";
        return;
      }
      cout << "Stack is not Full\n";
    }

    void isEmpty() {
      if (top == -1) {
        cout << "Stack is Empty\n";
        return;
      }
      cout << "Stack is not Empty\n";
    }

    int peek() {
      if (top == -1) {
        cout << "Stack is empty\n";
        return -99999;
      }
      return arr[top];
    }

    void push(int item) {
      top++;
      if (top == size) {
        cout << "Stack overflow\n";
        return;
      }
      arr[top] = item;
    }

    int pop() {
      if (top == -1) {
        cout << "Stack underflow\n";
        return -99999;
      }
      int temp = arr[top];
      top--;
      return temp;
    }

    void display() {
      if (top == -1) {
        cout << "Stack is empty\n";
        return;
      }
      for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;
    }
};

int main() {
  Stack s;
  int choice;
  cout << "Enter choice: 1->isFull, 2->isEmpty, 3->peek, 4->push, 5->pop, 6->display, 0->exit\n";
  do {
    cin >> choice;
    int elem;
    switch (choice) {
      case 1:
        s.isFull();
        break;

      case 2:
        s.isEmpty();
        break;

      case 3:
        cout << s.peek() << endl;
        break;

      case 4:
        cin >> elem;
        s.push(elem);
        break;

      case 5:
        cout << s.pop() << endl;
        break;

      case 6:
        s.display();
        break;

      default:
        cout << "Invalid choice\n";
    }
  } while (choice != 0);
  return 0;
}