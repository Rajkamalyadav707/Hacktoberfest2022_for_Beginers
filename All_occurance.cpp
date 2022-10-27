#include<bits/stdc++.h>
using namespace std; 

int out[1000];

int j = 0 ; 

void PrintAllOccurance(int *arr,int n, int i , int key){

	if(i == n){

		return ; 
	}
	if(arr[i]==key){

		//cout<<i<<" ";

	out[j]=i;

	j++;

	}

	PrintAllOccurance(arr,n,i+1,key);
}

int main(){

#ifndef ONLINE_JUDGE 

	freopen("inputf.txt","r",stdin);

	freopen("outputf.txt","w",stdout);

#endif

int arr[]={1,2,3,2,4,2};

int n = sizeof(arr)/sizeof(arr[0]);

PrintAllOccurance(arr,n,0,1);

cout<<endl;

for(int i = 0 ; i< j; i++){

	cout<<out[i]<<endl;

}cout<<endl;

	return 0 ;
}
