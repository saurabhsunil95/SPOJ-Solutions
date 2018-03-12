#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		int check;
		cin>>n>>check;
		if(check==0)
		cout<<"Airborne wins."<<endl;
		else
		cout<<"Pagfloyd wins."<<endl;
	}
	return 0;
}
