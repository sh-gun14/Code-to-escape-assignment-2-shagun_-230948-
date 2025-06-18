
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size(), m = mat[0].size();
    int l = 0, r = n * m - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        int val = mat[mid / m][mid % m];
        if (val == target) return true;
        else if (val < target) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}


