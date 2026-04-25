#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;
vector<vector<int> > rotationmatrix(int arr[4][4]){
vector<vector<int> > ans(4,vector<int>(4));
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
       ans[j][4-1-i]= arr[i][j];
    }
}
return ans;
}

void Oprotationmatrix(vector<vector<int> > arr){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<4;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}

int main(){ 
vector<vector<int> > arr={
               {1,2,3,4}
          ,    {5,6,7,8}
          ,    {9,10,11,12},
               {13,14,15,16}
            };

// vector<vector<int> > ans =rotationmatrix(arr);
Oprotationmatrix(arr);
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}