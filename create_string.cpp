#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void generate_permutations(string s, int index, vector<string> &permutations) {
    if (index == s.size()) {
        permutations.push_back(s);
        return;
    }

    for (int i = index; i < s.size(); ++i) {
        swap(s[index], s[i]);
        generate_permutations(s, index + 1, permutations);
        swap(s[index], s[i]);
    }
}

int main() {
    string input;
    cin >> input;

    vector<string> permutations;
    generate_permutations(input, 0, permutations);

    sort(permutations.begin(), permutations.end());

    cout << permutations.size() << endl;
    for (const string& perm : permutations) {
        cout << perm << endl;
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void generate_permutations(string s, int index, vector<string> &permutations) {
    if (index == s.size()) {
        permutations.push_back(s);
        return;
    }

    for (int i = index; i < s.size(); ++i) {
        swap(s[index], s[i]);
        generate_permutations(s, index + 1, permutations);
        swap(s[index], s[i]);
    }
}

int main() {
    string input;
    cin >> input;

    vector<string> permutations;
    generate_permutations(input, 0, permutations);

    sort(permutations.begin(), permutations.end());

    cout << permutations.size() << endl;
    for (const string& perm : permutations) {
        cout << perm << endl;
    }

    return 0;
}
