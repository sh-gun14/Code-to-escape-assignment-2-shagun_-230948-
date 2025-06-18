#include <bits/stdc++.h>
using namespace std;

string getChunk(string num, int i) {
    string chunk;
    for (int pos = 5 * i; pos > 5 * (i - 1); --pos) {
        int idx = num.size() - pos;
        chunk += (idx >= 0 ? num[idx] : '0');
    }
    return chunk;
}

int main() {
    int n;
    cin >> n;
    vector<string> nums(n);
    for (auto& s : nums) cin >> s;

    int i = 1;
    while (true) {
        vector<pair<string, int>> chunks;
        bool allZero = true;
        for (int j = 0; j < n; j++) {
            string c = getChunk(nums[j], i);
            chunks.push_back({c, j});
            if (c != "00000") allZero = false;
        }
        if (allZero) break;

        stable_sort(nums.begin(), nums.end(), [&](string& a, string& b) {
            return getChunk(a, i) < getChunk(b, i);
        });

        for (string& s : nums) cout << s << " ";
        cout << endl;
        i++;
    }

    return 0;
}
