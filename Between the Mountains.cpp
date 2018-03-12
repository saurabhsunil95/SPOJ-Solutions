#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		long long ans=1000001,s;
		cin>>a;
		int arr1[a];
		for(int i=0;i<a;i++)
		cin>>arr1[i];
		cin>>b;
		int arr2[b];
		for(int j=0;j<b;j++)
		cin>>arr2[j];
		sort(arr1,arr1+a);
		sort(arr2,arr2+b);
		for(int x=0;x<a;x++){
			for(int y=0;y<b;y++){
				s=abs(arr1[x]-arr2[y]);
				if(s<ans)
				ans=s;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
