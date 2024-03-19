#include "OrderList.h"
#include <iostream>
#include <algorithm> // For copy
#include <new>       // For bad_alloc

// Task 5.1
OrderList::OrderList() {
    head = nullptr;
}

// Task 5.2
OrderList::~OrderList() {

}

// Task 5.3
void OrderList::addOrder(const Order& order) {
    if (head == nullptr) {
        head = new OrderNode(order);
    } else {
        OrderNode* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new OrderNode(order);
    }
}

// Task 5.4
bool OrderList::removeOrder(int orderId) {
    if (head == nullptr) {
        return false;
    }
    if (head->buyer.getBuyerId() == orderId) {
        OrderNode* temp = head;
        head = head->next;
        delete temp;
        return true;
    } else {
        OrderNode* current = head->next;
        OrderNode* previous = head;
        while (current->order.getOrderId() != orderId && current->next != nullptr) {
            previous = current;
            current = current->next;
        }
        if (current->next == nullptr) {
            previous->next = nullptr;
            delete current;
        } else {
            previous->next = current->next;
            delete current;
        }
    }
    return true;
}

// Task 5.5
Order* OrderList::findOrder(int orderId) const {
    OrderNode* temp = head;
    while(temp->order.getOrderId() != orderId && temp->next != nullptr) {
        temp = temp->next;
    }
    if (temp->next != nullptr) {
        return &temp->order;
    } else {
        return nullptr;
    }
}

// Task 5.6
bool OrderList::isEmpty() const {
  return head == nullptr;
}

// Task 5.7
void OrderList::displayOrderList() const {
// ---------------------- provided code: DO NOT MODIFY --------------------------
    cout << "Order List:" << endl;
    if (head == nullptr) {
        cout << "The order list is empty." << endl;
        return;
    }

// ------------Write your code here to complete this task-----------------
    OrderNode* temp  = head;
    while(temp->next != nullptr) {
        temp->order.displayOrder();
    }
}

// Task 5.8
void OrderList::displayOrdersForBuyer(int buyerId) const {

// ------------Write your code here to complete this task-----------------
    bool found = false;
    OrderNode* temp = head;
    while(temp->buyer.getBuyerId() != buyerId && temp->next != nullptr) {
        temp = temp->next;
    }
    if (temp->next != nullptr) {
        temp->order.displayOrder();
        found = true;
    }
// ---------------------- provided code: DO NOT MODIFY --------------------------
    if (!found) {
        cout << "No orders found for Buyer ID: " << buyerId << endl;
    }
}


