#include <iostream>

using namespace std;

class Stack {
private:
  int* arr;
  int top;
  int capacity;

public:
  Stack(int capacity) {
    arr = new int[capacity];
    top = -1;
    this->capacity = capacity;
  }

  void push(int element) {
    if (top == capacity - 1) {
      cout << "Stack is full" << endl;
      return;
    }

    arr[++top] = element;
  }

  int pop() {
    if (top == -1) {
      cout << "Stack is empty" << endl;
      return -1;
    }

    return arr[top--];
  }

  int find_and_remove_lowest_element() {
    if (top == -1) {
      cout << "Stack is empty" << endl;
      return -1;
    }

    int lowest_element = arr[top];
    int lowest_element_index = top;

    for (int i = top - 1; i >= 0; i--) {
      if (arr[i] < lowest_element) {
        lowest_element = arr[i];
        lowest_element_index = i;
      }
    }


    int temp = arr[top];
    arr[top] = arr[lowest_element_index];
    arr[lowest_element_index] = temp;


    return arr[top--];
  }
};

int main() {
  Stack s(10);


  s.push(5);
  s.push(2);
  s.push(4);
  s.push(7);

  int lowest_element = s.find_and_remove_lowest_element();


  cout << "The lowest element is: " << lowest_element << endl;


  s.push(2);
  s.push(-1);


  lowest_element = s.find_and_remove_lowest_element();


  cout << "The lowest element is: " << lowest_element << endl;

  return 0;
}
