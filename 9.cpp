#include <iostream>
#include <cmath>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	double h,v;
	double t;
	cin>>h;
	
	t = sqrt(2*h/9.8);
	cout.precision(2);
	cout<<fixed<<t;
}   