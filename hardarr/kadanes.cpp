#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int kadanes(vector<int>& arr){
    int sum=0;
    int max =INT_MIN;
    int  ansStart=-1;
    int  ansEnd=-1;
    for(int i=0;i<arr.size();i++){
         int Start=-1;
        if(sum==0){
            Start=i;
        }
        sum+=arr[i];

        if(sum>max){
            max=sum;
          ansStart =Start;
          ansEnd =i;
        }

        if(sum<0){
            sum =0;
        }
    }
   cout<<ansStart<<" "<<ansEnd;
   return sum;

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
    cout<<kadanes(arr);
    return 0;


}