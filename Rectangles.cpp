#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	cin>>n;
	int total=0;
	for(i=1;i<=n;++i){
		for(j=1;j<=n;++j){
			if((i<=j)&&((i*j)<=n))
			total++;
			else total=total+0;
		}
	}
	cout<<total;
}
