#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t,n,m,d;
	cin>>t;
	while (t--){
		cin>>n>>m>>d;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		for(int j=n-1;j>=0;j--){
			int k=arr[j]/d;
			if(arr[j]>(k*d))
			m=m-k;
			else if(m<=0)
			break;
			else if(arr[j]=k*d)
			m=m-k-1;
			else if(arr[j]<d)
			break;
		}
		if(m<=0)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
