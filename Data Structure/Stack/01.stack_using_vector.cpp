#include <bits/stdc++.h>
using namespace std;
class Stack {
private:
    vector<int> v; // Internal vector to store stack elements

public:
    // Insert an element to the top of the stack
    void push(int val) {
        v.push_back(val);
    }

    // Remove the top element from the stack
    void pop() {
        if (!empty()) {
            v.pop_back();
        } else {
            cout << "Stack Underflow! Cannot pop.\n";
        }
    }

    // Return the top element
    int top() {
        if (!empty()) {
            return v[v.size() - 1]; // Last element of vector is the top
        }
        cout << "Stack is empty!\n";
        return -1; 
    }

    // Check if the stack is empty
    bool empty() {
        return v.size() == 0;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    // Printing elements (Will print in reverse order due to LIFO)
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}