#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
int n, m, x, y;
int v[405][405], dx[8], dy[8];
struct node {
    int x, y, ans;
} tmp;
void bfs(int x, int y) {
    queue<node> p;
    memset(v, -1, sizeof(v));
    v[x][y] = 0;
    tmp.x = x;
    tmp.y = y;
    tmp.ans = 0;
    p.push(tmp);
    while (!p.empty()) {
        node x = p.front();
        p.pop();
        for (int i = 0; i <= 7; i++) {
            node to;
            to.x = x.x + dx[i];
            to.y = x.y + dy[i];
            to.ans = x.ans;
            if (v[to.x][to.y] != -1)
                continue;
            v[to.x][to.y] = to.ans;
            p.push(to);
        }
    }
}
int main() {
    dx[0] = 1;
    dy[0] = 2;
    dx[1] = 1;
    dy[1] = -2;
    dx[2] = 2;
    dy[2] = 1;
    dx[3] = 2;
    dy[3] = -1;
    cin >> n >> m >> x >> y;
    bfs(0, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%4d",v[i][j]);
        cout << endl;
    }

    system("pause");
    return 0;
}
