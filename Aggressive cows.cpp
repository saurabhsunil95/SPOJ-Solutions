#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	int arr[100009];
	while(t--){
		long long n,c;
		cin>>n>>c;
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr, arr+n);
		long long lo=1,hi=arr[n-1],ans=0;
		while(lo<=hi){
			long long mid=(lo+hi)/2;
			int a=arr[0],temp=1;
			for(int i=1;i<n;i++){
				if(arr[i]-a>=mid)
                    temp++,a=arr[i];
			}
			if(temp<c)
			hi=mid-1;
			else{
                ans=mid;
                lo=mid+1;
            }
		}
		cout<<ans<<endl;
	}
	return 0;
}
