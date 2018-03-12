#include<boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp=boost::multiprecision;
using namespace std;

int main(){
	//unsigned int n,d,x,y;
	mp::cpp_int n,d,x,y;
	for(int i=0;i<10;i++){
		cin>>n;
		cin>>d;
		x=((n+d)/2);
		y=(n-x);
		cout<<x<<endl<<y<<endl;
	
	}
	return 0;
	
}
