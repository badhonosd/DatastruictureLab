#include<iostream>
using namespace std;

#define SIZE 100

int A[SIZE], front = -1, rear = -1;

bool isempty()
{
  if (front == -1 && rear == -1)
    return true;
  else
    return false;
}

bool isfull()
{
  if ((front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1)))
    return true;
  else
    return false;
}

void enqueue(int x)
{
  if (isfull())
  {
    cout << "Queue is full" << endl;
  }
  else
  {
    if (isempty())
    {
      front = rear = 0;
    }
    else
    {
      rear = (rear + 1) % SIZE;
    }
    A[rear] = x;
  }
}

void dequeue()
{
  if (isempty())
  {
    cout << "Queue is empty" << endl;
  }
  else
  {
    if (front == rear)
    {
      front = rear = -1;
    }
    else
    {
      front = (front + 1) % SIZE;
    }
  }
}

void displayQueue()
{
  if (isempty())
  {
    cout << "Queue is empty" << endl;
  }
  else
  {
    int i;
    if (front <= rear)
    {
      for (i = front; i <= rear; i++)
        cout << A[i] << " ";
    }
    else
    {
      for (i = front; i < SIZE; i++)
        cout << A[i] << " ";
      for (i = 0; i <= rear; i++)
        cout << A[i] << " ";
    }
    cout << endl;
  }
}

int main()
{
  enqueue(15);
  enqueue(20);
  cout << "Queue elements:" << endl;
  displayQueue();
  cout << endl;
  dequeue();

  cout << "Queue elements after dequeue : ";
  displayQueue();

  return 0;
}

