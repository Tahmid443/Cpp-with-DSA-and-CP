/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1.Open brackets must be closed by the same type of brackets.
2.Open brackets must be closed in the correct order.
3.Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/
#include <bits/stdc++.h>
using namespace std;

bool solution(string s){
    stack <char> st;
    for(int i = 0; i<s.size(); i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(st.empty()){ return false;}
            char topChar = st.top();
            if(ch == ')' && topChar == '(' || ch == '}' && topChar == '{' || ch == ']' && topChar == '['){
                st.pop();
            }
            else {return false;}
        }
    }
    return st.empty();
}
int main(){
    string s;
    cin >> s;
    if(solution(s) == true) cout << "true" << endl;
    else cout << "false" << endl;

}