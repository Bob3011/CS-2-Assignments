#ifndef linkedList
#define linkedList

#include <iostream>

using namespace std;

struct Node {
    int data;
    int count;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = NULL;
    }
    void addNode(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* cur = head;
            while (cur->next != NULL) {
                cur = cur->next;
            }
            cur->next = newNode;
        }
    }

    void removeNode(int val) {
        if (head == NULL) {
            return;
        }
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            Node* cur = head;
            while (cur->next != NULL && cur->next->data != val) {
                cur = cur->next;
            }
            if (cur->next != NULL) {
                Node* temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
            }
        }
    }

    void printList() {
        Node* cur = head;
        while (cur != NULL) {
            cout << cur->data << " ";
            cur = cur->next;
        }
    }

    int sum() {
        int total = 0;
        Node* current = head;
        while (current != nullptr) {
            total += current->data;
            current = current->next;
        }
        return total;
    }
};


#endif