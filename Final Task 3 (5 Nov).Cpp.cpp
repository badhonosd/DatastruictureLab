#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

void insertAtFront(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = nullptr;

    if ((*head_ref) != nullptr)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data) {
    if (prev_node == nullptr) {
        cout << "Previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if (new_node->next != nullptr)
        new_node->next->prev = new_node;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = nullptr;

    if (*head_ref == nullptr) {
        *head_ref = new_node;
        new_node->prev = nullptr;
        return;
    }

    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

void deleteFirst(Node** head_ref) {
    if (*head_ref == nullptr) {
        cout << "Linked list is empty. Cannot delete the first node.\n";
        return;
    }

    Node* temp = *head_ref;
    *head_ref = (*head_ref)->next;

    if (*head_ref != nullptr)
        (*head_ref)->prev = nullptr;

    delete temp;
}

void deleteLast(Node** head_ref) {
    if (*head_ref == nullptr) {
        cout << "Linked list is empty. Cannot delete the last node.\n";
        return;
    }

    Node* last = *head_ref;
    while (last->next != nullptr) {
        last = last->next;
    }

    if (last->prev != nullptr)
        last->prev->next = nullptr;
    else
        *head_ref = nullptr;

    delete last;
}

void deleteNode(Node** head_ref, Node* del_node) {
    if (*head_ref == nullptr || del_node == nullptr) {
        cout << "Invalid input. Cannot delete the node." << endl;
        return;
    }

    if (del_node->prev != nullptr)
        del_node->prev->next = del_node->next;
    else
        *head_ref = del_node->next;

    if (del_node->next != nullptr)
        del_node->next->prev = del_node->prev;

    delete del_node;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(&head, 30);
    insertAtFront(&head, 25);
    insertAtEnd(&head, 60);
    insertAfter(head->next, 35);

    cout << "Linked list: ";
    printList(head);

    deleteFirst(&head);
    cout << "Linked list after deleting the first node: ";
    printList(head);

    deleteLast(&head);
    cout << "Linked list after deleting the last node: ";
    printList(head);

    if (head != nullptr && head->next != nullptr)
        deleteNode(&head, head->next);
    cout << "Linked list after deleting a node in the middle: ";
    printList(head);

    return 0;
}
