#include <iostream>
#include <vector>
using namespace std;
//time complexity which be O(n) most optimal approach space complexity is O(1)
int dublicates(vector <int> &arr,int n){    
int i =0;
for(int j =0;j<n;j++){
if(arr[j]!=arr[i]){
    arr[i+1]=arr[j];
    i++;
}
}
return (i+1);
}


int main(){
    vector<int> arr ;
arr.push_back(4);
arr.push_back(4);
arr.push_back(6);
arr.push_back(6);
arr.push_back(8);
arr.push_back(15);
int n= arr.size();
int index = dublicates(arr,n);

for(int i=0;i<index;i++){
    cout<<arr[i]<<" ";
}
}