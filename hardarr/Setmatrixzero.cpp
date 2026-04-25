#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;
void MarkRow(int arr[4][4],int i){
    for(int j=0;j<4;j++){
      if(arr[i][j]!=0){
        arr[i][j] =-1;
      }
    }
}
void MarkCol(int arr[4][4],int j){
for(int i=0;i<4;i++){
    if(arr[i][j]!=0){
      arr[i][j] =-1;
    }
}
}

void SetMatrixZero(int arr[4][4]){
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(arr[i][j]== 0){
             MarkRow(arr,i);
             MarkCol(arr,j);
        }
    }
}

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(arr[i][j]==-1){
            arr[i][j] =0;
        }
    }
}
}
void BetterSetMatrixZero(int arr[4][4] ,int n,int m){
    int col[4] ={0};
    int row[4]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                col[j]=1;
                row[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]|| col[j]){
                arr[i][j] =0;
            }
        }
    }
}
int main(){ 

int arr[4][4]={
               {1,1,1,1}
          ,    {1,0,0,1}
          ,    {1,1,0,1},
               {1,1,1,1}
            };

BetterSetMatrixZero(arr,4,4);
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}