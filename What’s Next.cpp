#include <iostream>
using namespace std;

int main() {
int a1, a2, a3, v;
cin>>a1>>a2>>a3;
while ((a1!=0)||(a2!=0)||(a3!=0))
{
if(((a2-a1)==(a3-a2)))
{
v=(a3+(a3-a2));
cout<<"AP "<<v<<endl;
}
else if(((a2/a1)==(a3/a2))){
	v=(a3*(a3/a2));
	cout<<"GP "<<v<<endl;
}
cin>>a1>>a2>>a3;
}

	return 0;
}
