#include <iostream>
#include <vector>
using namespace std;

int linearsearch(vector <int> &arr,int n,int s){
 for(int i=0;i<n;i++){
    if(arr[i]==s){
        return i;
    }
 }
 return -1;
}
int main(){
vector<int> arr ;
arr.push_back(4);
arr.push_back(0);
arr.push_back(0);
arr.push_back(6);
arr.push_back(8);
arr.push_back(15);
int n= arr.size();

int s =linearsearch(arr,n,6);
cout<<s;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
}