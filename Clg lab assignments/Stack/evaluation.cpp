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

void evaluatePostfix(string s) {
  Stack st;
  for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    
    if (c >= '0' && c <= '9') {
      st.push(c - '0');
    } else {
      int val1 = st.pop();
      int val2 = st.pop();
      switch (c) {
        case '+': st.push(val2 + val1); break;
        case '-': st.push(val2 - val1); break;
        case '*': st.push(val2 * val1); break;
        case '/': st.push(val2 / val1); break;
      }
    }
  }

  cout << st.pop() << endl;
}

int main() {
  string postfix;
  cin >> postfix;

  evaluatePostfix(postfix);
  return 0;
}