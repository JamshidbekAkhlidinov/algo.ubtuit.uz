#include <iostream>
#include <cmath>
#include <iomanip>
//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main()
{
	cout<<setprecision(7);
	
	
	float x,y,f2;
	cin>>x>>y;
	
	f2 = ((1/(x+2/(x*x)+3/(pow(x,3))))+pow(M_E,x*x+3*x))/(atan(x+y)+pow(abs(5+x),2)) - pow(cos(y*y+x*x/2),2);
	
	cout<<setprecision(2)<<fixed<<f2;
	
}   