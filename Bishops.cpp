#include<boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp=boost::multiprecision;
using namespace std;

int main(){
	mp::cpp_int f,ans;
	while(cin>>f){
		if(f==1){
			ans=1;
		}
		else {
			ans=(f*2)-2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
