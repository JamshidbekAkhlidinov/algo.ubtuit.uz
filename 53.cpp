#include <iostream>
#include <cmath>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	float x,y;
	float x1,x2,x3,x4;
	float y1,y2;
	
	cin>>x>>y;
	
	y1 = 1.5; y2 = 1;
	x1 = -2; x2 = -1; x3 = 1; x4 = 2;
	
	if((y<=y1 and y>=y2 and x>=-2 and x<=2) or (y<=y2 and y>=0 and x<=sin(2) and x>=-sin(2) )){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	
	
}   