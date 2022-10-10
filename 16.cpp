#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	double x,y;
	double c1;
	
	cin>>x>>y;
	
	c1 = (x+y)/(y*y+abs((y*y+2)/(x+(pow(x,3)/5))))+pow(M_E,y+2);
	
	
	cout<<setprecision(2) << fixed<<c1;
	
}