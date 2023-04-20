#include <iostream>
#include <vector>
#include "linkedList.h"
using namespace std;

#include <iostream>
#include <vector>

using namespace std;



void insertAfter(vector<int>& vec, int firstValue, int secondValue) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == firstValue) {
            vec.insert(vec.begin() + i + 1, secondValue);
            i++;
        }
    }
}

LinkedList createLinkedList(vector<int>& vec) {
    LinkedList linkedList;
    for (int i = 0; i < vec.size(); i++) {
        int value = vec[i];
        int count = 1;
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[j] == value) {
                count++;
                i++;
            }
            else {
                break;
            }
        }
        linkedList.addNode(value, count);
    }
    return linkedList;
}

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the integer: ";
        cin >> vec[i];
    }

    int firstValue, secondValue;
    cout << "Enter first value: ";
    cin >> firstValue;
    cout << "Enter second value: ";
    cin >> secondValue;

    insertAfter(vec, firstValue, secondValue);
    cout << "Vector after insertions: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    LinkedList linkedList = createLinkedList(vec);
    cout << "Linked list: ";
    linkedList.printList();

    int sum = linkedList.sumNodes();
    cout << "sum of nodes: " << sum << endl;

    return 0;
}
