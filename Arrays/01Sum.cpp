class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        // if(matrix.empty() || matrix[0].empty()) {
        //     return ans; 
        // }

        int n = matrix.size();
        int m = matrix[0].size();

        int count = 0;
        int total = n * m;

        int StartingRow = 0;
        int EndingRow = n - 1;
        int StartingCol = 0;
        int EndingCol = m - 1;

        while(count < total){
            // PRINT STARTING ROW
            for(int i = StartingCol; i <= EndingCol && count < total; i++){
                ans.push_back(matrix[StartingRow][i]);
                count++;
            }
            StartingRow++;

            // PRINT ENDING COLUMN
            for(int i = StartingRow; i <= EndingRow && count < total; i++){
                ans.push_back(matrix[i][EndingCol]);
                count++;
            }
            EndingCol--;

            // PRINT ENDING ROW
            for(int i = EndingCol; i >= StartingCol && count < total; i--){
                ans.push_back(matrix[EndingRow][i]);
                count++;
            }
            EndingRow--;

            // PRINT STARTING COLUMN
            for(int i = EndingRow; i >= StartingRow && count < total; i--){
                ans.push_back(matrix[i][StartingCol]);
                count++;
            }
            StartingCol++;
        }

        return ans;
    }
};

