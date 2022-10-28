#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
struct node {
    int x, y, t;
} q, fa, son;
queue<node> p;
int r, c, dx[5] = {0, 0, 0, 1, -1}, dy[5] = {0, 1, -1, 0, 0};
bool b[41][41];
char dt[41][41];
int main() {
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++) {
            cin >> dt[i][j];
        }
    q.x = 1;
    q.y = 1;
    q.t = 0;
    p.push(q);
    b[1][1] = 1;
    while (!p.empty()) {
        // cout<<fa.x<<","<<fa.y<<endl;
        fa = p.front();
        p.pop();
        if (fa.x == r && fa.y == c) {
            cout << fa.t + 1;
            while (!p.empty())
                p.pop();
            break;
        }
        for (int i = 0; i <= 4; i++) {
            int nx = fa.x + dx[i], ny = fa.y + dy[i];
            if (nx <= r && nx >= 1 && ny <= c && ny >= 1 && dt[nx][ny] != '#' &&
                !b[nx][ny]) {
                b[nx][ny] = 1;
                son.x = nx;
                son.y = ny;
                son.t = fa.t + 1;
                p.push(son);
            }
        }
    }
    return 0;
}