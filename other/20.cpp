// class Solution {
// public:
//     bool isValid(string s) {
//         stack <char> st;
//         unordered_map <char, char> pk={
//             {')','('},
//             {']','['},
//             {'}','{'},
//         };
//         for (char x : s){
//             if (pk.find(x)!=pk.end()){
//                 if ( st.empty()){
//                     return false;
//                 }
//                 if (st.top()!=pk[x]){
//                     return false;
//                 }
//                 st.pop();
//             }else{
//                 st.push(x);
//             }
//         }
//         return st.empty();
//     }
// };
#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        unordered_map<char, char> parens = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        
        for (const auto& c : s) {
            if (parens.find(c) != parens.end()) {
                // if input starts with a closing bracket.
                if (open.empty()) {
                    return false;
                }

                if (open.top() != parens[c]) {
                    return false;
                }

                open.pop();
            } else {
                open.push(c);
            }
        }
        
        return open.empty();
    }
};

int main() {
    Solution solution;
    string s;

    // Nhập chuỗi từ người dùng
    cout << "Nhập chuỗi chứa các dấu ngoặc: ";
    cin >> s;

    // Kiểm tra tính hợp lệ của chuỗi
    bool result = solution.isValid(s);
    
    // Xuất kết quả
    if (result) {
        cout << "Chuỗi hợp lệ." << endl;
    } else {
        cout << "Chuỗi không hợp lệ." << endl;
    }

    return 0;
}
