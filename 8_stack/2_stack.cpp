#include <iostream>
#include<stack>
using namespace std;

// last questio 

class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i=0; i<s.length(); i++) {
            char ch = s[i];

            //opening bracket
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                //closing bracket - ch
                if(!st.empty()) {
                    char topCh = st.top();
                    if(ch == ')' && topCh =='(') {
                        //matching brackets
                        st.pop();
                    }
                    else if(ch == '}' && topCh =='{') {
                        //matching brackets
                        st.pop();
                    }
                    else if(ch == ']' && topCh =='[') {
                        //matching brackets
                        st.pop();
                    }
                    else {
                        //brackets not matching
                        return false;
                    }
                }
                else {
                    return false;
                }
            }
        }

        if(st.empty()) {
            //valid 
            return true;
        }
        else {
            return false;
        }
        
    }
};

void insertAtBottom(stack<int> &s, int target) {
        
         //base case
        if(s.empty()) {
                s.push(target);
                return;
        }

        int topElement = s.top();
        s.pop();
        //rec cal
        insertAtBottom(s, target);
        //BT
        s.push(topElement);
        
}

void reverseStack(stack<int> &s) {
        //base case 
        if(s.empty()) {
                return;
        }

        int target = s.top();
        s.pop();

        //reverse stack
        reverseStack(s);
        //insert at bottom target ko
        insertAtBottom(s, target);
}
void insertSorted(stack<int>& s, int target) {
        //base case
        if(s.empty()) {
                s.push(target);
                return;
        }
                s.push(target);
                return;
        if(s.top() >= target) {
        }

        int topElement = s.top();
        s.pop();
        insertSorted(s, target);

        //BT
        s.push(topElement);
}

void sortStack(stack<int> &s) {
        //base case
        if(s.empty()) {
                return;
        }

        int topElement = s.top();
        s.pop();

        sortStack(s);

        insertSorted(s, topElement);
}


int main() {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);

  if(s.empty()) {
        cout << "stack is empty, cant insert at bottom" << endl;
        return 0;
  }

  int target = s.top();
  s.pop();
  insertAtBottom(s, target);

  cout << "Printing" << endl;
  while(!s.empty()) {
          cout << s.top() << " ";
          s.pop();
  }
  cout << endl;



//   ***********************************
  stack<int> s;
  s.push(7);
  s.push(11);
  s.push(3);
  s.push(5);
  s.push(9);

  sortStack(s);

  cout << "Printing" << endl;
  while(!s.empty()) {
          cout << s.top() << " ";
          s.pop();
  }
  cout << endl;
  return 0;

  return 0;
}