#include <iostream>
#include <vector>
using namespace std;

// void ZeroAt(vector <int> &arr,int n){
//     vector <int> temp ;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }
// for(int i =temp.size();i<n;i++){
//     arr[i]=0;
// }

// }
void ZeroAtOP(vector <int> &arr,int n){
    int j=-1;
    for(int i=0;i<n;i++){
      if(arr[i]==0){
       j=i;
       break;
      }
    }
    if(j==-1){
        return;
    }
   for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
         swap(arr[i],arr[j]);
         j++;
    }
   }
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

ZeroAtOP(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}