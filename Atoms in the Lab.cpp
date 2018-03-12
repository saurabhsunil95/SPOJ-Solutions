#include<boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp=boost::multiprecision;
using namespace std;

int main(){
	long long t;
	cin>>t;
	mp::cpp_int n,k,m;
	while(t--){
		long long time=0;
		cin>>n>>k>>m;
		if(n>=m)
		cout<<time<<endl;
		else{
			while(1){
				time++;
				n=n*k;
				if(n>m)
				{
				time=time-1;
				break;	
				}
				else if(n==m){
					break;
				}
				
				
			}
			cout<<time<<endl;
		}
	}
	return 0;
}
