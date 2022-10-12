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
	

	if(a<=0){
		f  = -a;
	}
	
	if(0<1){
		f = a;
	}
	
	if(a>1 && a<2){
		f = 1;
	} 
	           
	if(a>2 && a<3){
		f = -2*a + 5;
	}
	
	cout<<fixed<<f;
	
}
