#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	float r1;
	float s1;
	
	cin>>r1;
	s1 = 4*M_PI*pow(r1,2);
	cout<<setprecision(2) << fixed<< s1;
	
}
