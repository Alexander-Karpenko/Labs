#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void duplicate_odd(Node* head) {
    Node* current = head;
    while (current != NULL) {
        if (current->data % 2 != 0) {
            Node* new_node = new Node;
            new_node->data = current->data;
            new_node->next = current;
            if (current == head) {
                head = new_node;
            } else {
                Node* prev = head;
                while (prev->next != current) {
                    prev = prev->next;
                }
                prev->next = new_node;
            }
        }
        current = current->next;
    }
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;

    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout << "Original linked list: ";
    printList(head);

    duplicate_odd(head);

    cout << "\nLinked list after duplication: ";
    printList(head);

    return 0;
}