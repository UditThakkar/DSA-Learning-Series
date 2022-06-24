class Solution {
public:
    
    bool search(vector<vector<char>>& board, string word,int i,int j,int m,int n,int ind,vector<vector<bool>> &vis){
        if(ind==word.size()) return true;
        if(i<0 or j<0 or i>=m or j>=n) return false;
        if(board[i][j]!=word[ind] or vis[i][j]==true) return false;
        vis[i][j] = true;
        
        if(search(board,word,i-1,j,m,n,ind+1,vis) or 
           search(board,word,i+1,j,m,n,ind+1,vis) or
           search(board,word,i,j-1,m,n,ind+1,vis) or
           search(board,word,i,j+1,m,n,ind+1,vis)){
            return true;
        }
        vis[i][j] = false;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(search(board,word,i,j,m,n,0,vis)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
