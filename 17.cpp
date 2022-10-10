#include <iostream>
#include <cmath>
#include <iomanip>
//xato
//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	cout<<setprecision(7);
	
	float x,y,f1;
	cin>>x>>y;
	
	f1 = (2*tan(x+M_PI/6))/(1.0/3+(cos(y+x*x)*cos(y+x*x)))+log2(x*x+2);
	
	cout<<setprecision(2)<<fixed<<f1;
	
}   