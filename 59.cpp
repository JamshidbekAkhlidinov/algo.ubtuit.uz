#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	float x,y;
	cin>>x>>y;
	
	if(y<=2*x+1 and y<=-2*x+1 and y>=2*x-1 and y>=-2*x-1 and x<=0.5 and x>=-0.5){
		cout<<"yes";
	}else{
		cout<<"no";
	}

	
}