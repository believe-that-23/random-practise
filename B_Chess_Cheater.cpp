#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
#define SZ(x) ((int)((x).size()))

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); // Remove in problems with online queries!

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
        int winning_streaks_cnt = 0;
        int wins = 0;
        int losses = 0;
        vector<int> losing_streaks; 
        for (int i = 0; i < N; i++) {
            if (S[i] == 'W') {
                wins++;
                if (i == 0 or S[i-1] == 'L') winning_streaks_cnt++;
            }
            if (S[i] == 'L') {
                losses++;
                if (i == 0 or S[i-1] == 'W') losing_streaks.push_back(0);
                losing_streaks.back()++;
            }
        }
        if (K >= losses) {
            cout << 2*N-1 << "\n";
            continue;
        }
        if (wins == 0) {
            if (K == 0) cout << 0 << "\n";
            else cout << 2*K-1 << "\n";
            continue;
        }
        if (S[0] == 'L') losing_streaks[0] = 1e8;
        if (S[N-1] == 'L') losing_streaks.back() = 1e8;
        sort(losing_streaks.begin(), losing_streaks.end());
        wins += K;
        for (int ls: losing_streaks) {
            if (ls > K) break;
            K -= ls;
            winning_streaks_cnt--;
        }
        cout << 2*wins - winning_streaks_cnt << "\n";
    }
}