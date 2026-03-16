#include <iostream>
#include <vector>
#include <set>
using namespace std;
int XORmissingNum(vector<int>& arr){
    int xor1 =0;
    int xor2 =0;
    int n = arr.size()-1;
    for(int i =0;i<n;i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^  arr.size()+1;
    return xor1 ^xor2;
}
int OPmissingNum(vector<int>& arr){
    //O(n)
    // [1,2,3,4,6]
    int sum =0;
    for(int i=0;i<arr.size();i++){
     sum +=arr[i];
    }

   int expectedSum =0;
   expectedSum = (n *(n-1))/2;
//    for(int i=arr.size()+1;i>0;i--){
//     expectedSum+=i;
//    }
//    cout<<expectedSum<<" "<<sum;

return expectedSum-sum;
}
int missingNum(vector<int>& arr){
    //O(n2)
    // [1,2,3,4,6]
    for(int i=1;i<=arr.size()+1;i++){
      bool find = false;
        for(int j=0;j<arr.size();j++){
            if(arr[j]==i){
              find = true;
              break;
            }
        }
        if(find == false){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    // vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
     vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(8);
    cout << XORmissingNum(arr) << endl; 
    return 0;
}