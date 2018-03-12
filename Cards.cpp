#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	long long n;
	while(t--){
		cin>>n;
		long long sum=0;
		while(n!=0){
			sum=sum+(2*n)+(n-1);
			n--;
		}
		cout<<sum%1000007<<endl;
	}
	return 0;
}
