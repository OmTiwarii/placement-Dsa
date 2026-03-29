#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
void RearrangledArr(vector <int> &arr){
vector <int> postive ;
vector <int> nagtive ;
for(int i=0;i<arr.size();i++){
    if(arr[i]>0){
       postive.push_back(arr[i]);
    }else{
         nagtive.push_back(arr[i]);
    }
}

for(int i=0;i<arr.size()/2;i++){
    arr[2*i]=postive[i];
    arr[2*i+1]=nagtive[i];
}

}
vector <int> OPRearrangledArr(vector <int> &arr){
    int n=arr.size();
    int positiveindex=0;
    int negativeIndex =1;
    vector <int> ans(n,0);
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
       ans[negativeIndex]=arr[i];
       negativeIndex+=2;
        }else{
            ans[positiveindex]=arr[i];
            positiveindex+=2;
        }
    }
return ans;
 
}
// 2 variation 
vector <int> OPRearrangledArrOne(vector <int> &arr){
vector <int> postive ;
vector <int> nagtive ;
for(int i=0;i<arr.size();i++){
    if(arr[i]>0){
       postive.push_back(arr[i]);
    }else{
         nagtive.push_back(arr[i]);
    }
}

if(postive.size()>nagtive.size()){

 for(int i=0;i<nagtive.size();i++){
 arr[i*2]=postive[i];
 arr[i*2+1] = nagtive[i];
 }
 int index = nagtive.size()*2;
 for(int i =nagtive.size();i<postive.size();i++){
    arr[index]=postive[i];
    index++;
 }
}else{
 for(int i=0;i<postive.size();i++){
 arr[i*2]=postive[i];
 arr[i*2+1] = nagtive[i];
 }
 int index = postive.size()*2;
 for(int i =postive.size();i<nagtive.size();i++){
    arr[index]=nagtive[i];
    index++;
 }
}
return arr;
}
int main(){
// vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(7);
    arr.push_back(-1);
    arr.push_back(-5);
    arr.push_back(-3);
    arr.push_back(6);
    arr.push_back(4);
     arr.push_back(11);
    arr.push_back(42);

   vector<int> ans = OPRearrangledArrOne(arr);

   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
    return 0;


}