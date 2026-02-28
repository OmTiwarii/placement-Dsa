#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
      cin>>arr[i];
    }
  int arr2[n] ;
  for(int i=0;i<n;i++){
      arr2[i]=arr[i];
    }

   sort(arr, arr + n);

 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    
    }
     for(int i=0;i<n;i++){
    cout<<arr2[i]<<" ";
    
    }

}