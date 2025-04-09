// #include<iostream>
// #include<vector>
// using namespace std;
// #include<unordered_set>
// #include <numeric>

// int main(){
//     vector<int> nums = {2,3,6,7};
//     int it = 0;
//     int min = nums[0];
//     int target = 7;
//     vector<int> iterator;
//     unordered_set<int> numsSet(nums.begin(), nums.end());
//     vector<vector<int>> mainIterator;

//     for(int i = 0; i<nums.size()-1; i++){
//         min = nums[i];
//         cout<<"ss";
//         it = 0;
//         iterator.clear();
//         while(it!=target){
//             if(it>target){ // it 8
//                 // by substract min
//                 int diff = it - target;
//                 iterator.pop_back() ;
//                 if(numsSet.count(diff)){
//                     iterator.push_back(diff);
//                     mainIterator.push_back(iterator);
//                 }
//                 it=target;

//                 // by adding 
//                 while(iterator.size()!=0){
//                     iterator.pop_back();
                    

//                     if(!iterator.size()){
//                         iterator.pop_back();
//                     }

//                     if(iterator.size()!=0){
//                         int sum = std::accumulate(iterator.begin(), iterator.end(), 0);
//                         diff = target - sum;
//                         if(numsSet.count(diff)){
//                             iterator.push_back(diff);
//                             mainIterator.push_back(iterator);
//                         }

//                     }
//                 }


//             }else{
//                 it = it + min;
//                 iterator.push_back(min);
//             }
//         }

        
//     }

//     for(int i = 0; i<mainIterator.size(); i++){
//         for( int j = 0; j<mainIterator[i].size(); j++){
//             cout<<mainIterator[i][j];
//         }
//         cout<<" "<<endl;
//     }

// }
#include <iostream>
#include <vector>
#include <unordered_set>
#include <numeric>

using namespace std;

int main() {
    vector<int> nums = {2, 3, 6, 7};
    int target = 7;
    unordered_set<int> numsSet(nums.begin(), nums.end());
    vector<vector<int>> mainIterator;

    for (int i = 0; i < nums.size() - 1; i++) {
        int min = nums[i];
        int it = 0;
        vector<int> iterator; // Clear iterator for each new loop iteration

        while (it != target) {
            if (it > target) { 
                // Handling overshoot case
                int diff = it - target;

                if (!iterator.empty()) {
                    iterator.pop_back(); // Remove last element safely
                }

                if (numsSet.count(diff)) {
                    iterator.push_back(diff);
                    mainIterator.push_back(iterator);
                }
                
                it = target; // Stop loop

                // Handling backtracking
                while (!iterator.empty()) {
                    iterator.pop_back();
                    
                    if (iterator.empty()) {
                        break; // Stop if iterator is empty
                    }

                    int sum = std::accumulate(iterator.begin(), iterator.end(), 0);
                    diff = target - sum;

                    if (numsSet.count(diff) && iterator.size() >= 2) {
                        iterator[iterator.size() - 2] = diff; 
                        mainIterator.push_back(iterator);
                    }
                }

            } else {
                it += min;
                iterator.push_back(min);
            }
        }
    }

    // Printing the results
    for (const auto& vec : mainIterator) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
