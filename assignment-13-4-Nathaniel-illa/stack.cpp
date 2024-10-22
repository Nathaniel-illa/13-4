#include "stack.hpp"

// Constructor: Initialize the stack
Stack::Stack(int size) {
    arr = new int[size];
    capacity = size;
    top = -1;
}

// Destructor: Free memory
Stack::~Stack() {
    delete[] arr;
}

// Push an element onto the stack
void Stack::push(int element) {
    if (isFull()) {
        cout << "Stack overflow. Unable to push " << element << endl;
        return;
    }
    arr[++top] = element;
}

// Pop an element from the stack
int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack underflow. Unable to pop." << endl;
        return -1; // Error value
    }
    return arr[top--];
}

// Return the top element of the stack
int Stack::topEl() const {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return -1; // Error value
    }
    return arr[top];
}

// Check if the stack is empty
bool Stack::isEmpty() const {
    return top == -1;
}

// Check if the stack is full
bool Stack::isFull() const {
    return top == capacity - 1;
}

// Get the current size of the stack
int Stack::getSize() const {
    return top + 1;
}

// Print all elements of the stack
void Stack::printAll() const {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
