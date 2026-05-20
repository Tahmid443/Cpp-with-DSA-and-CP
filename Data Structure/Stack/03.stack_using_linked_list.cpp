#include <bits/stdc++.h>
using namespace std;

class StackLL {
private:
    list<int> ll; // Internal linked list (STL list)

public:
    // Push element to the front of the linked list (Top of Stack)
    void push(int val) {
        ll.push_front(val);
    }

    // Pop element from the front of the linked list
    void pop() {
        if (!empty()) {
            ll.pop_front();
        } else {
            cout << "Stack Underflow!\n";
        }
    }

    // Return the front element of the linked list
    int top() {
        if (!empty()) {
            return ll.front();
        }
        cout << "Stack is empty!\n";
        return -1;
    }

    // Check if the linked list is empty
    bool empty() {
        return ll.size() == 0;
    }
};

int main() {
    StackLL st;
    st.push(10);
    st.push(20);
    st.push(30);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}