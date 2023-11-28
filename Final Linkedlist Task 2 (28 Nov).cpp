
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }


    void remove(int value) {
        Node* current = head;
        Node* prev = nullptr;

        if (current != nullptr && current->data == value) {
            head = current->next;
            delete current;
            return;
        }


        while (current != nullptr && current->data != value) {
            prev = current;
            current = current->next;
        }


        if (current == nullptr) {
            cout << "Value not found in the list" << endl;
            return;
        }


        prev->next = current->next;
        delete current;
    }


    bool find(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }


    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList myList;


    myList.insert(80);
    myList.insert(85);
    myList.insert(90);
    myList.insert(95);


    cout << "Initial linked list:" << endl;
    myList.display();


    cout << "\nSearching for value 85: " << boolalpha << myList.find(85) << endl;
    cout << "Searching for value 100: " << boolalpha << myList.find(100) << endl;


    myList.remove(90);


    cout << "\nLinked list after deleting 90:" << endl;
    myList.display();

    return 0;
}
