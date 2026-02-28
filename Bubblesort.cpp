#include <iostream>
using namespace std;
int main(){
int arr[]= {1,2,3,4,5,6,7,8};
int n= sizeof(arr)/sizeof(arr[0]);

for(int i=n-1;i>=1;i--){
    int didentswap =0;
    for(int j=0;j<=i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
         didentswap = 1;
      }
    }
     if(didentswap == 0){
        cout<<"already"<<endl;
        break ;
      }
      cout<<"runs"<<endl;
}

 for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
}