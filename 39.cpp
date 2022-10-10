#include <iostream>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	float a,b;
	cin>>a>>b;
	float temp = a;
	
	if(a<b){
		a = (a+b)/2;
		b = 4*temp*b;
		cout<<setprecision(1)<<fixed<<a<<" "<<b;
	}else{
		a = 4*a*b;
		b = (temp+b)/2;
		cout<<setprecision(1)<<fixed<<a<<" "<<b;
	}
	
}

