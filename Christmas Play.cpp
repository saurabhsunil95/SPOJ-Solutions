#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t,n,k;
	cin>>t;
	int arr[20000];
	int check[20000];
	while(t--){
		int ans;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		if(k==1)
		ans=0;
		else {
			int a=0;
			for(int j=n;j>=k;j--){
				check[a]=arr[j-1]-arr[j-k];
				a++;
			}
			sort(check,check+a);
			ans=check[0];
		}
		cout<<ans<<endl;
	}
	return 0;
}
