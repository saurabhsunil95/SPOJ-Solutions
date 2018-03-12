#include<iostream>
using namespace std;

int main(){
	float x,y;
	int sum,c;
	for(int j=0;;j++){
		cin>>x;
		if(x==0.00)
		break;
		else {
		sum=0;
		for(int i=2;;i++){
		sum++;
		y=1.00/i;
		x=(x-y);
		if(x<0.00){
			cout<<sum<<" card(s)"<<endl;
			break;
		}
		else continue;	
		}
	}
		
	}
	
	return 0;
}
