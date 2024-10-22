#ifndef MAIN_H
#define MAIN_H

#include "stack.hpp"
#include <string>
#include <iostream>
using namespace std;

// Function declarations
void reverse_string(string &str);
int check_parentheses(string exp);

// Function to reverse a string using a stack
void reverse_string(string &str) {
    Stack s(str.length());

    // Push all characters onto the stack
    for (char c : str) {
        s.push(c);
    }

    // Pop all characters to reverse the string
    for (size_t i = 0; i < str.length(); ++i) {
        str[i] = s.pop();
    }
}

// Function to check if parentheses are balanced in the expression
int check_parentheses(string exp) {
    Stack s(exp.length());

    // Traverse through each character in the string
    for (size_t i = 0; i < exp.length(); ++i) {
        char ch = exp[i];

        // If the character is an opening bracket, push it onto the stack
        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        }
        // If the character is a closing bracket, check for matching opening bracket
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (s.isEmpty()) {
                return i + 1; // Not balanced
            }
            char top = s.pop();
            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return i + 1; // Not balanced
            }
        }
    }

    // If the stack is not empty, there are unmatched opening brackets
    if (!s.isEmpty()) {
        return exp.length(); // The expression is not balanced
    }

    // If stack is empty, then it is balanced
    return 0;
}

#endif