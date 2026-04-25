#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

vector<int> leaderarr(vector<int> arr){
 vector<int> ans;
for(int i =0;i<arr.size();i++){
    bool leader = true;
    for(int j=i+1;j<arr.size();j++){
        if(arr[j]>arr[i]){
            leader =false;
            break;

        }
    }
    if(leader == true){
        ans.push_back(arr[i]);
    }
}
return ans;
}
vector<int> OPleaderarr(vector<int> arr){
    //  10,22,12,3,0,6
    vector<int> ans;
    int n =arr.size();
    int max = INT_MIN;
    for(int i=n-1;i>=0;i--){
       if(arr[i]>max){
        ans.push_back(arr[i]);
        max = arr[i];
       }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
// vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(22);
    arr.push_back(12);
    arr.push_back(3);
    arr.push_back(0);
    arr.push_back(6);
    vector<int> ans  =OPleaderarr(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<< " ";
    }



    return 0;


}