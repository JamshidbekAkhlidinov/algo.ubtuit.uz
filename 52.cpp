#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	float x,y;
	cin>>x>>y;
	

	if((y<=2*x+3 and y>=(1.0)/(3)*x-(1.0)/(3) and y>=-x and y<=0) or (y>=(1.0)/(3)*x-(1.0)/(3) and y<=2*x+3 and y<=-x)){
		cout<<"yes";
	}

	else{
		cout<<"no";
	}

	
}