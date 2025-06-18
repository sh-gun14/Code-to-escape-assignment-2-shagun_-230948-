#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int h; cin >> h;
        freq[h]++;
    }

    vector<pair<int, int>> v(freq.begin(), freq.end());
    int ans = 0;

    for (int i = v.size() - 1; i > 0; i--) {
        int h1 = v[i].first, f1 = v[i].second;
        for (int j = i - 1; j >= 0; j--) {
            int h2 = v[j].first, f2 = v[j].second;
            if (h1 > h2) {
                ans = max(ans, abs(f1 - f2));
            }
        }
    }

    cout << ans << endl;
    return 0;
}
