#include<boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp=boost::multiprecision;
using namespace std;

int main(){
	mp::cpp_int n,sum,x,y;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<endl;
		cin>>x;
		sum=0;
		for(int j=0;j<x;j++){
		cin>>y;
		sum=sum+y;	
		}
		if(sum%x==0)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
