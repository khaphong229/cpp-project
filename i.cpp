#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <limits>
#include <cctype>

using namespace std;

// Hàm kiểm tra xem chuỗi có phải là số nguyên hợp lệ hay không
bool is_valid_number(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) return false;
    }
    return true;
}

// Hàm tách các số nguyên từ một chuỗi
vector<string> extract_numbers(const string& line) {
    vector<string> numbers;
    string current_number;
    
    for (char c : line) {
        if (isdigit(c)) {
            current_number += c;
        } else {
            if (!current_number.empty()) {
                numbers.push_back(current_number);
                current_number.clear();
            }
        }
    }
    if (!current_number.empty()) {
        numbers.push_back(current_number);
    }
    
    return numbers;
}

int main() {
    const long long MAX_INT32 = static_cast<long long>(numeric_limits<int>::max());
    const long long MAX_INT64 = numeric_limits<long long>::max();
    
    string line;
    long long total_sum = 0;

    // Đọc dữ liệu đầu vào từ stdin
    while (getline(cin, line)) {
        vector<string> numbers = extract_numbers(line);
        
        for (const string& num_str : numbers) {
            if (is_valid_number(num_str)) {
                try {
                    long long num = stoll(num_str);
                    if (num > MAX_INT32 && num <= MAX_INT64) {
                        total_sum += num;
                    }
                } catch (const out_of_range& e) {
                    // Bỏ qua số vượt quá phạm vi long long
                    continue;
                } catch (const invalid_argument& e) {
                    // Bỏ qua chuỗi không hợp lệ
                    continue;
                }
            }
        }
    }

    // In kết quả
    cout << total_sum << endl;

    return 0;
}
