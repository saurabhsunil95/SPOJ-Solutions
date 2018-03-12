#include <iostream>
using namespace std;

int happy(long long x){
	int arr;
	long long sum=0;
	while(x!=0){
		arr=x%10;
		sum=sum+(arr*arr);
		x=x/10;
	}
	return sum;
}

int main(){
	long long n;
	cin>>n;
	int count=0;
	long long nsum=happy(n);
	long long nn=nsum;
	count++;
	while(1){
		nsum=happy(nsum);
		count++;
		if(nsum==1){
			cout<<count;
			break;
		}
		else if(nsum==nn){
			cout<<"-1";
			break;
		}
		else if(count>=20){
			cout<<"-1";
			break;
		}
	}
	return 0;
}
