#include <iostream>
using namespace std;

class Stack {
  char *arr;
  int size;
  int top;

  public:
    Stack() {
      size = 10000;
      arr = new char[size];
      top = -1;
    }

    bool isFull() {
      if (top == size) {
        return true;
      }
      return false;
    }

    bool isEmpty() {
      if (top == -1) {
        return true;
      }
      return false;
    }

    char peek() {
      if (top == -1) {
        return '#';
      }
      return arr[top];
    }

    void push(char item) {
      top++;
      if (top == size) {
        return;
      }
      arr[top] = item;
    }

    char pop() {
      if (top == -1) {
        return '#';
      }
      char temp = arr[top];
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

int prec(char op) {
  if (op == '*' || op == '/') {
    return 2;
  } else if (op == '+' || op == '-') {
    return 1;
  } else {
    return -1;
  }
}

void infixToPostfix(string s) {
  Stack st;
  string result;

  for (int i = 0; i < s.length(); i++) {
    char c = s[i];

    if (c >= '0' && c <= '9') {
      result += c;
      // cout << result << endl;
    } else if (c == '(') {
      st.push('(');
    } else if (c == ')') {
      while (st.peek() != '(') {
        result += st.pop();
      }
      // cout << result << endl;
      st.pop();
    } else {
      while (!st.isEmpty() && prec(c) <= prec(st.peek())) {
        result += st.pop();
      }
      // cout << result << endl;
      st.push(c);
    }
  }

  while (!st.isEmpty()) {
    result += st.pop();
  }

  cout << result << endl;
}

int main() {
  string exp;
  cout << "Enter expression: ";
  cin >> exp;

  infixToPostfix(exp);
  return 0;
}