#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> OPIIntersection(vector<int> a, vector<int> b){
vector<int> ans;
int n = a.size();
int m = b.size();
int i=0;
int j=0;
while(i<n){
    if(a[i]==b[j]){
        ans.push_back(a[i]);
        i++;
        j++;
    }else{
        i++;
    }
}
return ans;

}
vector<int> IIntersection(vector<int> a, vector<int> b){
vector<int> ans;
int n = a.size();
int m = b.size();
vector<int> visit(m,0);

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]== b[j] && visit[j]==0){
            ans.push_back(a[i]);
            visit[j]=1;
            break;

              if(b[j]>a[i]){
            break;
        }
        }
      

    }
}

return ans;
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(5);
     arr.push_back(6);
 
   
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(3);
    arr2.push_back(5);
    arr2.push_back(6);
    arr2.push_back(6);
    arr2.push_back(7);
  

 vector<int> Union =  OPIIntersection(arr, arr2);
    for (int i = 0; i < Union.size(); i++)
    {
        cout << Union[i] << " ";
    }
}