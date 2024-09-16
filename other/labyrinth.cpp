#include <bits/stdc++.h>
using namespace std;

#define ff(i, a, b) for (ll i = a, _b = b; i <= _b; i++)
#define fff(i, a, b) for (ll i = a, _b = b; i < _b; i++)
#define ln '\n'
typedef long long ll;

const int N = 1001;
const int dx[4] = {-1, 0, 0, 1};
const int dy[4] = {0, -1, 1, 0};
const char dir[4] = {'U', 'L', 'R', 'D'};

int n, m, s, t, u, v;
char a[N][N];
bool visited[N][N];
int d[N][N];
pair<int, int> p[N][N];
pair<int, int> start, finish;

bool bfs(int i, int j) {
    queue<pair<int, int>> q;
    q.push({i, j});
    visited[i][j] = true;
    d[i][j] = 0;

    while (!q.empty()) {
        pair<int, int> top = q.front();
        q.pop();
        for (int k = 0; k < 4; k++) {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !visited[i1][j1] && a[i1][j1] != '#') {
                d[i1][j1] = d[top.first][top.second] + 1;
                p[i1][j1] = {top.first, top.second};
                q.push({i1, j1});
                visited[i1][j1] = true;
                if (a[i1][j1] == 'B') {
                    finish = {i1, j1};
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'A') {
                s = i;
                t = j;
                start = {s, t};
            } else if (a[i][j] == 'B') {
                u = i;
                v = j;
                finish = {u, v};
            }
        }
    }

    memset(visited, false, sizeof(visited));

    if (bfs(s, t)) {
        cout << "YES" << ln;
        cout << d[u][v] << ln;

        string path;
        pair<int, int> cur = finish;
        while (cur != start) {
            pair<int, int> pp = p[cur.first][cur.second];
            for (int k = 0; k < 4; k++) {
                if (pp.first + dx[k] == cur.first && pp.second + dy[k] == cur.second) {
                    path += dir[k];
                    break;
                }
            }
            cur = pp;
        }
        reverse(path.begin(), path.end());
        cout << path << endl;
    } else {
        cout << "NO" << ln;
    }

    return 0;
}
