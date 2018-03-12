#include <iostream>
using namespace std;

int main(){
	int n,t=1;
	while(t!=0){
		cin>>n;
		if(n==-1)
			break;
		else if(n==1)
			cout<<"Y"<<endl;
		else{
			int k=1;
			n=n-1;
			while(n>0){
				n=n-(k*6);
				if(n==0)
				{
					cout<<"Y"<<endl;
					break;
				}
				else if(n<0)
				{

					cout<<"N"<<endl;
					break;
				}
				k++;
			}
		

		}
	}
	return 0;
}
