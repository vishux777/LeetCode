class Solution {
public:
bool isSafe(int r, int c, int n, vector<string>&board){
    for (int i = 0; i < r; i++) {
            if (board[i][c] == 'Q') return false;
        }
        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }
        for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') return false;
        }
        return true;
        }
void solve(int row, int n,vector<string>& board,vector<vector<string>>&ans){
    if(row==n){ans.push_back(board); return;}
    for(int j=0;j<n;j++){
        if(isSafe(row,j,n,board)){
            board[row][j]='Q';
            solve(row+1,n,board,ans);
            board[row][j]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        solve(0,n,board,ans);
        return ans;
    }
};