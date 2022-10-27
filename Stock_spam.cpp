#include<bits/stdc++.h>

using namespace std; 

void calculateSpan(vector<int>&arr, int n)
    {

       
       vector<int>v;
       stack<int>s;
       
       
       for(int i=0; i<n; i++)
       {
                if(s.size()==0) v.push_back(-1);
           
               else if (arr[s.top()]>arr[i]) v.push_back(s.top());
           
               else 
               {
               while(s.size()!=0 && arr[s.top()]<=arr[i])
               {
                   s.pop();
               }
               
                if(s.size()==0) v.push_back(-1);
           
                else  v.push_back(s.top());
               
           }
           
           
  s.push(i);
           
   }
       
       for(int i=0; i<v.size(); i++)
       {
           v[i]=i-v[i];
       }
       
      for(int i=0; i<v.size(); i++)
       {
          cout<<v[i]<<" ";
       }
       
       

 }
int main(){

   #ifndef ONLINE_JUDGE
    freopen("inputf.txt","r",stdin);
    freopen("outputf.txt","w",stdout);
   #endif


    int cnt; 
    cin>>cnt ; 

    vector<int>arr;

    for(int i = 0 ; i< cnt ; i++){

        int a; 
        cin>>a; 
        arr.push_back(a);
    }

calculateSpan(arr,cnt);


    return 0;
}
