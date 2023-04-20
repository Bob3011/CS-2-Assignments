#ifndef classlinkedList
#define classlinkedList

#include <iostream>

using namespace std;
class Node {
public:
    int value;
    int count;
    Node* next;

    Node(int value, int count) {
        this->value = value;
        this->count = count;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void addNode(int value, int count) {
        Node* newNode = new Node(value, count);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }

        curr->next = newNode;
    }

    void removeNode(int value) {
        if (head == nullptr) {
            return;
        }

        Node* curr = head;
        Node* prev = nullptr;

        while (curr != nullptr && curr->value != value) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr) {
            return;
        }

        if (prev == nullptr) {
            head = curr->next;
        }
        else {
            prev->next = curr->next;
        }

        delete curr;
    }

    void printList() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->value << "(" << curr->count << ")" << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    int sumNodes() {
        int sum = 0;
        Node* curr = head;
        while (curr != nullptr) {
            sum += curr->value * curr->count;
            curr = curr->next;
        }
        return sum;
    }
};

#endif