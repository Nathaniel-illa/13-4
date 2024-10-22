
#ifndef STACK_H
#define STACK_H
#include <vector>
#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;        // Array to hold stack elements
    int top;         // Index of the top element
    int capacity;    // Maximum number of elements the stack can hold

public:
    // Constructor
    Stack(int size);

    // Destructor
    ~Stack();

    // Stack operations
    void push(int element);
    int pop();
    int topEl() const;
    bool isEmpty() const;
    bool isFull() const;
    int getSize() const;
    void printAll() const;
};

#endif
