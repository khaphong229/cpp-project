#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dai = s.length();
    unordered_map<int, int> d;

    for (int i = 0; i < n; i++) {
        d[a[i]]++;
    }

    // Track ranges to reverse
    vector<pair<int, int>> ranges;
    for (auto &pair : d) {
        if (pair.second % 2 == 1) {
            int start = pair.first - 1;
            int end = dai - pair.first;
            ranges.emplace_back(start, end);
        }
    }

    // Apply reversals
    for (auto &range : ranges) {
        int start = range.first;
        int end = range.second;
        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }

    cout << s << endl;
    return 0;
}
