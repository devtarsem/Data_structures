// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<vector<int>> grid = {
//         {1,3,1},
//         {1,5,1},
//         {4,2,1},
//     };

//     int i = 0;
//     int j = 0;

//     int next1;
//     int next2;

//     int right1;
//     int right2;
//     int bottom1;
//     int bottom2;

//     int sum1;
//     int sum2;
//     int sum3;
//     int sum4;

//     int path = grid[i][j];

//     while(i < grid.size() && j < grid[0].size()){

//         // path = path + grid[i][j];


//         if(i+1 == grid.size()-1 && j == grid[0].size()-1){
//             i++;
//             path = path + grid[i+1][j];
//             break;
//         }

//         if(j<grid[0].size()-1){
//             next1 = grid[i][j+1];
//         }else{
//             next1 = 0;
//         }


//         if(j+2 <= grid[0].size()-1){
//             right1 = grid[i][j+2];
//         }else{
//             right1 = 0;
//         }

//         if(i<grid.size()-1 && j<grid[0].size()-1){
//             bottom1 = grid[i+1][j+1];
//             right2 = grid[i+1][j+1];
//         }else{
//             right2 = 0;
//             bottom1 = 0;
//         }



//         if(i<grid.size()-1){
//             next2 = grid[i+1][j];
//         }else{
//             next2 = 0;
//         }


//         if(i+2 <= grid.size()-1){
//             bottom2 = grid[i+2][j];
//         }else{
//             bottom2 = 0;
//         }

//         sum1 = next1 + right1;
//         sum2 = next1 + bottom1;
//         sum3 = next2 + right2;
//         sum4 = next2 + bottom2;

//         int minVal = std::min({sum1, sum2, sum3, sum4});

//         if(minVal == sum1){
//             i = i;
//             j = j+2;
//             path = sum1 + path;
//         }else if(minVal == sum2){
//             i++;
//             j++;
//             path = sum2 + path;

//         }else if(minVal == sum3){
//             i++;
//             j++;
//             path = sum3 + path;

//         }else if(minVal == sum4){
//             i = i+2;
//             j = j;
//             path = sum4 + path;

//         }else{
//             break;
//         }


//     }

//     cout<<path;


// }
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> grid = {
        {1,3,1},
        {1,5,1},
        {4,2,1},
    };

    int i = 0;
    int j = 0;
    int path = grid[0][0];

    while(i < grid.size() && j < grid[0].size()){
        // path += grid[i][j];

        // If already at destination
        if(i == grid.size()-1 && j == grid[0].size()-1){
            break;
        }

        int next1 = (j < grid[0].size()-1) ? grid[i][j+1] : 1e9;
        int next2 = (i < grid.size()-1) ? grid[i+1][j] : 1e9;
        int right1 = (j+2 < grid[0].size()) ? grid[i][j+2] : 1e9;
        int bottom2 = (i+2 < grid.size()) ? grid[i+2][j] : 1e9;
        int bottom1 = (i < grid.size()-1 && j < grid[0].size()-1) ? grid[i+1][j+1] : 1e9;

        int sum1 = next1 + right1;
        int sum2 = next1 + bottom1;
        int sum3 = next2 + bottom1; // same as right2
        int sum4 = next2 + bottom2;

        int minVal = min({sum1, sum2, sum3, sum4});

        if(minVal == sum1 && j+2 < grid[0].size()){
            path += grid[i][j+1];  // first right
            j++;
            path += grid[i][j+1];  // second right
            j++;
        }
        else if(minVal == sum2 && i+1 < grid.size() && j+1 < grid[0].size()){
            path += grid[i][j+1];  // right
            j++;
            path += grid[i+1][j];  // down
            i++;
        }
        else if(minVal == sum3 && i+1 < grid.size() && j+1 < grid[0].size()){
            path += grid[i+1][j];  // down
            i++;
            path += grid[i][j+1];  // right
            j++;
        }
        else if(minVal == sum4 && i+2 < grid.size()){
            path += grid[i+1][j];  // down
            i++;
            path += grid[i+1][j];  // down again
            i++;
        }
        else {
            break; // Safety net
        }
    }

    cout << "Final path sum: " << path << endl;
    return 0;
}
