#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define sekidoCode int main()
#define sp ios_base::sync_with_stdio(0); cin.tie(0)
const double EPSILON = 1e-9;
set<double> roots;  
bool infinite_solutions = false;

void solve(int a, int b, int c) {
    if (a == 0 && b == 0 && c == 0) {
        infinite_solutions = true;
    } else if (a == 0 && b == 0) {
        return;
    } else if (a == 0) {
        if (b != 0) {
            double x = -c / (double)b;
            roots.insert(x);
        }
    } else {
        double delta = (double)b * b - 4.0 * a * c;
        if (delta > EPSILON) { 
            double x1 = (-b + sqrt(delta)) / (2.0 * a);
            double x2 = (-b - sqrt(delta)) / (2.0 * a);
            roots.insert(x1);
            roots.insert(x2);
        } else if (fabs(delta) < EPSILON) {
            double x = -b / (2.0 * a);
            roots.insert(x);
        }
    }
}

sekidoCode {
    sp;
    int n;
    cin >> n;
    FOR(1, n, i) {
        int a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    if (infinite_solutions) {
        cout << -1;
    } else {
        cout << roots.size();
    }
}
