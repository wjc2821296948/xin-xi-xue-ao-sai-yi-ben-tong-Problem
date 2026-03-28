#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
int n;
int path[N];

void dfs(int sum, int cnt, int last) {
    if (sum == n && cnt > 1) {
        printf("%d=%d", n, path[0]);
        for (int i = 1; i < cnt; ++i) {
            printf("+%d", path[i]);
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n-sum ; ++i) {
        if (i >= last) {
            path[cnt] = i;
            dfs(sum + i, cnt + 1, i);
        }
    }
}

int main() {
    cin >> n;
    dfs(0, 0, 1);
    return 0;
}


