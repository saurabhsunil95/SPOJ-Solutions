#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		int k=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
		int j,h,temp;
			for(j=n-1;j>0;j--){
					if(arr[j-1]<arr[j]){
					temp=arr[j-1];
					k=1;
					break;
					}
					else if(j==0)
					k=0;
				}
				if(k==1){
					for(h=n-1;h>j-1;h--){
						if(temp<arr[h]){
						swap(arr[j-1],arr[h]);
						sort(arr+j,arr+n);
						break;
						}
					}		
				}
		if(k==1){
			for(int i=0;i<n;i++)
			cout<<arr[i];
		}
		else if(k==0)
		{
			cout<<"-1";
		}
		
		cout<<endl;
		
	}
	return 0;
}
