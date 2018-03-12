#include<iostream>
using namespace std;

int check(int arr[],int nw[],int sz){
	for(int j=1;j<=sz;j++){
		if(arr[j]!=nw[j])
		return 2;
	}
	return 3;
}

int main(){
	int arr[100001],nw[100001];
	int x,t=1;
	while(t){
		cin>>t;
		for(int i=1;i<=t;i++){
			cin>>arr[i];
			x=arr[i];
			nw[x]=i;	
		}
		if(t==0)
		break;
		int z=check(arr,nw,t);
		if(z==3)
		cout<<"ambiguous"<<endl;
		else cout<<"not ambiguous"<<endl;
	}
}
