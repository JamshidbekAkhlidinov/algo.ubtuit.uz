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
	
	if(a<-1){
		f = -a-1;
	}
	if(-1<a and a<0){
		f = a+1;
	}
	if(1>a and a>0){
		f = -a+1;
	}
	if(a>1){
		f = a-1;
	}
	
	
	

	
	cout<<fixed<<f;
	
}
