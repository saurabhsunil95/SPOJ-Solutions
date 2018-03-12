#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	long long n,half,temp,count;
	cin>>t;
	while(t--){
		end:
		cin>>n;
		if(n==0)
		cout<<"NO"<<endl;
		else{
		count=1;
		half=n/2;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		temp=arr[0];
		for(int j=1;j<n;j++){
			if(temp==arr[j])
			count++;
			else {
				temp=arr[j];
				count=1;
			}
			if(count>half){
				cout<<"YES "<<temp<<endl;
				break;
			}
		}
		if(count<=half)
		cout<<"NO"<<endl;
	}
}
	return 0;
}
