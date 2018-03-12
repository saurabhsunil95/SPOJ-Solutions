#include <iostream>
using namespace std;

int main(){
	int i,j=0,n=0,x,sum=0;
	int arr[10000];
	while(n!=-1){
		sum=0;
		j=0;
		cin>>n;
		if(n==-1)
		break;
		for(i=0;i<n;++i){
			cin>>x;
			arr[i]=x;
			sum=sum+x;
		}
		
		if(sum%n==0){
			for(i=0;i<n;++i){
			int a=((sum/n)-arr[i]);
			if(a>0)
			j=j+a;
			}
			cout<<j<<endl;
		}
		else {
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
