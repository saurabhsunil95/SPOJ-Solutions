#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,sum=0,s1=0,s2=0,x=10;
	while(x--){
		cin>>n;
		s2=s2+n;
		s1=sum;
		if(abs(100-s1)<abs(100-s2))
		sum=s1;
		else sum=s2;
		if(sum>=100)
		break;
		
	}
	cout<<sum;
	return 0;
}
