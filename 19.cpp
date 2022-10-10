#include <iostream>
#include <cmath>
#include <iomanip>
//xato
//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	int x,y;
	float z;
	cin>>x>>y;
	
	z = log10((x+y)*(x+y)+sqrt(abs(y)+2)-(x-(x*y)/((x*x)/2-5)))+(cos(x+y)*cos(x+y)/(pow(cos(x+y),1/3)));
	
	cout<<setprecision(2)<<fixed<<z;
	
}   