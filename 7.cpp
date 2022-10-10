#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	int r,h;
	double V;
	cin>>h>>r;
	
	V = (M_PI*pow(r,2)*h)/3;
	
	cout<<setprecision(2) << fixed<<V;
	
}