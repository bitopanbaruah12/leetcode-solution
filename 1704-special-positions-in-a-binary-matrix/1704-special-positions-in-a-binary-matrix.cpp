class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> row;
        vector<int> column;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    row.push_back(i);
                    column.push_back(j);
                }
            }
        }
        int count_ans = 0;
        for (int i = 0; i < row.size(); i++) {
            int k = row[i];
            int p = column[i];
            int count_1_row = 0;
            int count_1_column = 0;

            for (int j = 0; j < n; j++) {
                if (mat[k][j] == 1) {
                    count_1_row++;
                }
            }
            for (int j = 0; j < m; j++) {
                if (mat[j][p] == 1) {
                    count_1_column++;
                }
            }
            if (count_1_row == 1 && count_1_column == 1) {
                count_ans++;
            }
        }
        return count_ans;
    }
};