#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> OPUnion(vector<int> a, vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    int i =0;
    int j =0;
    while(i<n1 && j<n2){
         
    }
}

vector<int> UUnion(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(b[i]); 
    }
vector<int> temp;
    for(auto it :st){
        temp.push_back(it);
    }
    return temp;
}

int main()
{
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(15);
   
    vector<int> arr2;
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(8);
    arr.push_back(8);
    arr.push_back(15);
  

 vector<int> Union = UUnion(arr, arr2);
    for (int i = 0; i < Union.size(); i++)
    {
        cout << Union[i] << " ";
    }
}