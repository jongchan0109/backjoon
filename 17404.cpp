#pragma warning(disable:4996)
#include<iostream>
using namespace std;
typedef pair<int, int> pii;
int n;
int field[3][1000];
int dp[3][1000];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> field[0][i] >> field[1][i] >> field[2][i];
    int res = 987654321;
    for (int color = 0; color < 3; color++) {
        for (int i = 0; i < 3; i++)
            dp[i][0] = (i == color ? field[i][0] : 987654321);
        for (int i = 1; i < n; i++) {
            dp[0][i] = field[0][i] + min(dp[1][i - 1], dp[2][i - 1]);
            dp[1][i] = field[1][i] + min(dp[0][i - 1], dp[2][i - 1]);
            dp[2][i] = field[2][i] + min(dp[0][i - 1], dp[1][i - 1]);
        }
        res = min(res, min(dp[(color + 1 > 2 ? 0 : color + 1)][n - 1], dp[(color - 1 < 0 ? 2 : color - 1)][n - 1]));
    }
    cout << res;
    return 0;
}