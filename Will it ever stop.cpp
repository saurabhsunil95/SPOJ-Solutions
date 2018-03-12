#include <iostream>
using namespace std;

int checkpower(unsigned long long x){
	unsigned long long n=x;
	while(n!=1){
		if((n%2)!=0)
		return 2;
		n=n/2;
	}
	return 3;
}

 int main(){
 	unsigned long long n;
 	cin>>n;
 	if(n<=1)
 	cout<<"TAK"<<endl;
 	else {
 	int i=checkpower(n);
 	if(i==2)
 	cout<<"NIE"<<endl;
 	else cout<<"TAK"<<endl;
 }
	return 0;
 }
