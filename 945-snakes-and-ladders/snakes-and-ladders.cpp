class Solution {
public:
pair<int,int> getcoord(int num,int n){
    int row_b=(n-1)-(num-1)/n;
    int col_top=(num-1)%n;
    if(n%2==0 && row_b%2==0 ||n%2==1 && row_b%2==1){
        col_top=(n-1)-col_top;
    }
    return {row_b,col_top};
}
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        queue<int> q;
        q.push(1);
        int steps=0;
        vis[n-1][0]=true;
        while(!q.empty()){
            int s=q.size();
            while(s--){
                int x=q.front();
                q.pop();
                if(x==n*n){
                    return steps;
                }
                for(int i=1;i<=6;i++){
                    int val=x+i;
                    if(val>n*n){
                        break;
                    }
                    pair<int,int> coord=getcoord(val,n);
                    int r=coord.first;
                    int c=coord.second;
                    if(vis[r][c] == true)
                        continue;
                    vis[r][c]=true;
                    if(board[r][c]==-1){
                        q.push(val);
                    }else{
                        q.push(board[r][c]);
                    }
                    
                }
            }
            steps++;
        }
        return -1;
    }
};