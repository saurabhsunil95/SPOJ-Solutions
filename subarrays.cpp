#include <iostream>
using namespace std;

int main(){
	int n,m,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cin>>k;
	for(int j=0;j<=n-k;j++){
		m=arr[j];
		for(int l=j+1;l<j+k;l++){
			if(arr[l]>m)
			m=arr[l];
		}
		cout<<m<<" ";
	}
	return 0;
}
