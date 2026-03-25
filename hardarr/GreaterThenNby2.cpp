#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int greaterthennby2(vector<int>& arr)

{
    int n =arr.size()/2;
    for(int i=0;i<arr.size();i++){
      int count =0;
      for(int j=0;j<arr.size();j++){
        if(arr[j]==arr[i]){
            count++;
        }
      }
      if(count>=n){
        return arr[i];
        break;
      }
    }
    return -1;

}
int bettermajorityEleGreaterthenNby2(vector<int>& arr){
    map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    for(auto it :mpp){
      if(it.second>(arr.size()/2)){
        return it.first;
      }
    }
    return -1;
}
// optimal approach 
//moores voting algorithm
int OPgreaterthennby2(vector<int>& arr){
    int count =0;
    int el;
    for(int i=0;i<arr.size();i++){
        if(count ==0){
            count =1;
            el=arr[i];
        }else if(arr[i]==el){
            count++;
        }else{
            count--;
        }
    }
    int count2 =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==el){
            count2++;
        }
    }
    if(count2>arr.size()/2){
        return el;
    }

    return -1;
}

int main(){
// vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    cout<<OPgreaterthennby2(arr);
    return 0;


}