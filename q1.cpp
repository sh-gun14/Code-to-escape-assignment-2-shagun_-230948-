


int countOccurrences(vector<int>& a, int target) {
    int low = lower_bound(a.begin(), a.end(), target) - a.begin();
    int high = upper_bound(a.begin(), a.end(), target) - a.begin();
    return high - low;
}

