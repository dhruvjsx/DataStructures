class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;     
        int n=matrix[0].size();
        int m=matrix.size();
        int total_element=n*m;
        int count=0;
        int startRow=0;
        int startCol=0;
        int endCol=n-1;
        int endRow=m-1;


        while(count<total_element){
            for(int i=startCol; i<=endCol && count<total_element; i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            for(int i=startRow; i<=endRow && count<total_element; i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            for(int i=endCol; i>=startCol && count<total_element; i--  ){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
             for(int i=endRow; i>=startRow && count<total_element; i--  ){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
            
        }
        return ans;
    }
};