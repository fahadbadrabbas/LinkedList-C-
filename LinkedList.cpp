#include "LinkedList.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

LinkedList::LinkedList() {
    head = NULL;
}

LinkedList::~LinkedList() {

}

void LinkedList::insertToFront(const ItemType &val) {
    Node *temp = new Node();
    temp->value = val;
    temp->next = head;
    head = temp;
}

void LinkedList::printList() const {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool LinkedList::get(int i, ItemType& item) const {
    if (i < 0 || i >= size()) return false;
    int c = 0;
    Node* temp = head;

    while (temp != NULL) {
        if (c == i) {
            item = temp->value;
            return true;
        }
        temp = temp->next;
        ++c;
    }
    return 0;
}

void LinkedList::printReverse() const {
    string str = "";
    Node* temp = head;
    while (temp != NULL) {
        str = temp->value + " " + str;
        temp = temp->next;
    }
    cout << str << endl;
}

void LinkedList::append(const LinkedList &other) {
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = other.head;
}

void LinkedList::reverseList() {
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void LinkedList::swap(LinkedList &other) {
    Node* temp = head;
    head = other.head;
    other.head = temp;
}

int LinkedList::size() const {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        ++count;
        temp = temp->next;
    }
    return count;
}
