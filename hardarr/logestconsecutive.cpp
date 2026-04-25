#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;
bool linerarsearch(vector<int> arr,int x){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            return true;
        }
    }
    return false;

}
int LogestConsecutive(vector<int> arr){
    int largest =1;
 for(int i=0;i<arr.size();i++){
int x = arr[i];
int count =1;

while(linerarsearch(arr,x+1) ==true){
x=x+1;
count = count+1;
}
largest = max(count,largest);
 }
return largest;
}
int BetterLogestConsecutive(vector<int> arr){
    sort(arr.begin(),arr.end());
    int currCount =0;
    int LastSmaller = INT_MIN;
    int Longest =1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]-1==LastSmaller){
            currCount++;
            LastSmaller=arr[i];
        }else if(arr[i]!=LastSmaller){
            currCount =1;
            LastSmaller=arr[i];
        }
        Longest = max(currCount,Longest);
    }
    return Longest;
}
int OptimalLogestConsecutive(vector<int> arr){
    int n = arr.size();
    if(n==0) return 0;
    int longest =1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto it: st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x =it;
            while(st.find(x+1)!= st.end()){
                x =x+1;
                cnt =cnt +1;
            }
            longest = max(cnt ,longest);
        }
    }
return longest;
}

int main(){
// vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(15);
    arr.push_back(4);
    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(14);
    arr.push_back(16);
    cout<<OptimalLogestConsecutive(arr);
    return 0;
}