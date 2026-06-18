class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> v;
        for (int i = 0; i < 9; i++) {
            set<char> sr, sc;
            int emptyr = 0, emptyc = 0;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    sr.insert(board[i][j]);
                } else {
                    emptyr += 1;
                }
                if (board[j][i] != '.') {
                    sc.insert(board[j][i]);
                } else {
                    emptyc += 1;
                }
            }
            if (emptyr + sr.size() < 9) {
                return false;
            }

            if (emptyc + sc.size() < 9) {
                sc.clear();
                return false;
            }
        }
          
          for (int row = 0; row < 9; row += 3) {
    for (int col = 0; col < 9; col += 3) {
        set<char> s;
        for (int i = row; i < row + 3; i++) {
            for (int j = col; j < col + 3; j++) {
                if (board[i][j] != '.') {
                    if (s.count(board[i][j])) return false;
                    s.insert(board[i][j]);
                }
            }
        }
    }
}
        return true;
    }
};
