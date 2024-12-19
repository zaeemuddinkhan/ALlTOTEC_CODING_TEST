//Question 4. C++ Program for Merging Two Sorted Linked Lists:

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int x) : data(x), next(nullptr) {}
};


node* sortedlist(node* l1, node* l2) {
    node* dum = new node(0); 
    node* cur = dum;
    
    
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->data < l2->data) {
            cur->next = l1;
            l1 = l1->next;
        } else {
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    
    
    if (l1 != nullptr) {
        cur->next = l1;
    } else {
        cur->next = l2;
    }

    return dum->next;
}


void printingthelist(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


node* creatingnode(int data) {
    return new node(data);
}

int main() {
    
    node* l1 = creatingnode(1);
    l1->next = creatingnode(3);
    l1->next->next = creatingnode(5);
    l1->next->next->next = creatingnode(7);

    
    node* l2 = creatingnode(2);
    l2->next = creatingnode(4);
    l2->next->next = creatingnode(6);
    l2->next->next->next = creatingnode(8);

    
    cout << "List 1: ";
    printingthelist(l1);

    cout << "List 2: ";
    printingthelist(l2);

    
    node* merged = sortedlist(l1, l2);

    
    cout << "Merged Sorted List: ";
    printingthelist(merged);

    return 0;
}
