// this is array implementation of queue
#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int size;
    int front;
    int rear;

  public:
    Queue() {
        size = 10000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void isFull() {
        if (rear == size) {
            cout << "Queue is Full" << endl;
        } else {
            cout << "Queue is Not Full" << endl;
        }
    }

    void isEmpty() {
        if (front == rear) {
            cout << "Queue is Empty" << endl;
        } else {
            cout << "Queue is Not Empty" << endl;
        }
    }

    void push(int n) {
        if (rear == size) {
            cout << "Overflow" << endl;
        } else {
            cout << n << " is pushed into queue" << endl;
            arr[rear] = n;
            rear++;
        }
    }

    void pop() {
        if (front == rear) {
            cout << "Underflow" << endl;
        } else {
            cout << arr[front] << " is popped from queue" << endl;
            arr[front] = -1;
            front++;
            if (front == rear) {
                front = 0;
                rear = 0;
            }
        }
    }

    void display() {
        for (int i = front; i < rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue s;
    int element;
    cout << "0 -> exit\n" << "1 -> insert\n" << "2 -> delete\n" << "3 -> check isFull\n"
         << "4 -> check isEmpty\n" << "5 -> display\n";
    int choice;

    while (1) {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 0:
                return 0;
            
            case 1:
                cout << "Enter element you want to insert: ";
                cin >> element;
                s.push(element);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.isFull();
                break;

            case 4:
                s.isEmpty();
                break;

            case 5:
                s.display();
                break;

            default:
                cout << "Enter a valid choice" << endl;
        }
    }
    return 0;
}