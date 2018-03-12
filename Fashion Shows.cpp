#include <iostream>
using namespace std;

int main(){
	int t,n,arr1[1000],arr2[1000];
	cin>>t;
	for(int i=0;i<t;++i){
		cin>>n;
		for(int j=0;j<n;++j)
		cin>>arr1[j];
		for(int k=0;k<n;++k)
		cin>>arr2[k];
		for(int b=0;b<n;++b){
			for(int c=b+1;c<n;++c)
			if(arr1[b]<arr1[c]){
				int temp=arr1[b];
				arr1[b]=arr1[c];
				arr1[c]=temp;
			}
		}
		for(int d=0;d<n;++d){
			for(int e=d+1;e<n;++e)
			if(arr2[d]<arr2[e]){
				int temp=arr2[d];
				arr2[d]=arr2[e];
				arr2[e]=temp;
			}
		}
		
		int sum=0;
		for(int a=0;a<n;++a){
		sum=sum+(arr1[a]*arr2[a]);
		}
		cout<<sum<<endl;
	}
	
}
