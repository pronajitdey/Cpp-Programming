// circular queue using array
#include <iostream>
using namespace std;

class CircularQueue {
  int *arr;
  int size;
  int front, rear;

 public:
  CircularQueue(int s) {
    arr = new int[s];
    size = s;
    front = rear = -1;
  }

  bool isFull();
  bool isEmpty();
  void enQueue(int item);
  int deQueue();
  void display();
};

bool CircularQueue::isFull() {
  if (front == (rear + 1) % size) {
    return true;
  }
  return false;
}

bool CircularQueue::isEmpty() {
  if (front == -1) return true;
  return false;
}

void CircularQueue::enQueue(int item) {
  if (isFull()) {
    cout << "Queue is full" << endl;
  } else {
    if (front == -1) front = 0;
    rear = (rear + 1) % size;
    arr[rear] = item;
    cout << "Inserted " << item << endl;
  }
}

int CircularQueue::deQueue() {
  int element;
  if (isEmpty()) {
    cout << "Queue is empty" << endl;
    return -1;
  } else {
    element = arr[front];
    if (front == rear) {
      front = rear = -1;
    } else {
      front = (front + 1) % size;
    }
    return element;
  }
}

void CircularQueue::display() {
  if (isEmpty()) {
    cout << "Empty Queue" << endl;
  } else {
    for (int i = front; i != rear; i = (i + 1) % size) {
      cout << arr[i] << " ";
    }
    cout << arr[rear] << endl;
  }
}

int main() {
  CircularQueue q(10000);
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
        q.enQueue(element);
        break;

      case 2:
        cout << q.deQueue() << endl;
        break;

      case 3:
        if (q.isFull()) cout << "Queue is full" << endl;
        else cout << "Queue is not full" << endl;
        break;

      case 4:
        if (q.isEmpty()) cout << "Queue is empty" << endl;
        else cout << "Queue is not empty" << endl;
        break;

      case 5:
        q.display();
        break;

      default:
        cout << "Enter a valid choice" << endl;
    }
  }
  return 0;
}