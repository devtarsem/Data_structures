class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> rowOnes;
        vector<int> rowZero;
        vector<int> colOnes;
        vector<int> colZero;


        for(int i = 0; i<grid.size(); i++){
            // zero and one for rows
            int sum = 0;
            // int preserve = 0;
            for(int j = 0; j<grid[i].size(); j++){
                sum = sum + grid[i][j];
            }
            // preserve = sum;
            rowOnes.push_back(sum);
            rowZero.push_back(grid[i].size()-sum);
            // sum = 0;

            
        }

        int row = 0;
        int col = 0;
        while(col!= grid[0].size()){
            int sum = 0;
            row = 0;
            while(row!=grid.size()){
                sum = sum + grid[row][col];
                row++;
            }
            col++;
            colOnes.push_back(sum);
            colZero.push_back(grid.size()-sum);
        }

        // for(int i = 0; i<rowOnes.size(); i++){
        //     cout<<rowOnes[i]<<endl;
        // }

        vector<vector<int>> newMat(grid.size(), vector<int>(grid[0].size(), 0));
        cout<<rowOnes.size()<<endl;
        cout<<rowZero.size()<<endl;
        cout<<colOnes.size()<<endl;
        cout<<colZero.size()<<endl;

        for(int i = 0; i<newMat.size(); i++){
            for(int j = 0; j<newMat[i].size(); j++){
                newMat[i][j] = rowOnes[i] + colOnes[j] - rowZero[i] - colZero[j];
            }
        }
        return newMat;
    }
};