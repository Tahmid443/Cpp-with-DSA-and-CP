#include <bits/stdc++.h>
using namespace std;
#define MAX 100 // Defining the maximum capacity of the stack

class StackArray {
private:
    int arr[MAX];    // Static array to store stack elements
    int topIndex;    // Index tracker for the top element

public:
    // Constructor initializes topIndex to -1 (indicating empty stack)
    StackArray() {
        topIndex = -1;
    }

    // Insert an element to the top of the stack
    void push(int val) {
        if (topIndex >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << val << "\n";
            return;
        }
        topIndex++;
        arr[topIndex] = val;
    }

    // Remove the top element from the stack
    void pop() {
        if (empty()) {
            cout << "Stack Underflow! Cannot pop.\n";
            return;
        }
        topIndex--; // Simply decrementing the index logically deletes the element
    }

    // Return the top element
    int top() {
        if (!empty()) {
            return arr[topIndex];
        }
        cout << "Stack is empty!\n";
        return -1; 
    }

    // Check if the stack is empty
    bool empty() {
        return topIndex == -1;
    }
    
    // Optional helper function to check if the stack is full
    bool isFull() {
        return topIndex == MAX - 1;
    }
};

int main() {
    StackArray st;
    st.push(10);
    st.push(20);
    st.push(30);

    // Printing elements (Will print in reverse order: 30 20 10)
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}