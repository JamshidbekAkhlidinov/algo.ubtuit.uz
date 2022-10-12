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
	if(a<=-1){
		f = 1.0/(a*a); 
	}
	if(a>-1 && a<=2){
		f = a*a;
	}
	if(a>2){
		f = 4;
	}
	
	cout<<fixed<<f;
	
}
