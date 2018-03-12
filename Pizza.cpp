#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int i,j,a,b,d,n;
	double sum=0,two=0,three=0,four=0;
	int ans=0;
	char ch;
	cin>>n;
	while(n--){
		cin>>a>>ch>>b;
		if(a==3&&b==4)
		three++;
		else if(a==1&&b==4)
		four++;
		else if(a==1&&b==2)
		two++;
	}
	b=min(three,four);
	ans=ans+b;
	three=three-b;
	four=four-b;
	ans=ans+three;
	i=two/2;
	ans=ans+i;
	two=two-i*2;
	j=(ceil(two*0.5+four*0.25));
	ans=ans+j;
	cout<<ans+1<<endl;
	return 0;
	
}
