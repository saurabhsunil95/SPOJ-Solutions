#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char c[40];
		int x,y1=0,y2=0,y3=0,y4=0,y5=0,y6=0,y7=0,y8=0;
		cin>>x;
		cin>>c;
		char a,b,cc;
		for(int i=0;i<38;i++){
			a=c[i];
			b=c[i+1];
			cc=c[i+2];
			
			if(a=='T'&&b=='T'&&cc=='T')
			y1++;
			else if(a=='T'&&b=='T'&&cc=='H')
			y2++;
			else if(a=='T'&&b=='H'&&cc=='T')
			y3++;
			else if(a=='T'&&b=='H'&&cc=='H')
			y4++;
			else if(a=='H'&&b=='T'&&cc=='T')
			y5++;
			else if(a=='H'&&b=='T'&&cc=='H')
			y6++;
			else if(a=='H'&&b=='H'&&cc=='T')
			y7++;
			else if(a=='H'&&b=='H'&&cc=='H')
			y8++;
		}
		
		cout<<x<<" "<<y1<<" "<<y2<<" "<<y3<<" "<<y4<<" "<<y5<<" "<<y6<<" "<<y7<<" "<<y8<<endl;
	}
	return 0;
}
