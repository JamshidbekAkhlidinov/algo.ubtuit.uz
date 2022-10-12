#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	float a;
	cin>>a;
	float f;
	cout<<setprecision(2);
	
	if(a<0){
		f = -a;
	}
	if(a>0){
		f = -a*a;
	}

	
	cout<<fixed<<f;
	
}
