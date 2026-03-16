#include <iostream>
#include <vector>
#include <set>
using namespace std;
int maxconsutive(vector <int> arr){
    int max =0;
    int count =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]== 1){
            count ++;

          if(count>max){
                max=count;
            }
        }else{
            count =0;
        }
          
    }

    return max ;
}

//Q2 find the number that appears once and the other twice

int  appearsonce(vector <int> arr){
    int ans =0;
    for(int i=0;i<arr.size();i++){
       ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    // vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
     vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(5);
    cout << appearsonce(arr) << endl; 
    return 0;
}