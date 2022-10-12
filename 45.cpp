#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	float a,b,c,d,x1,x2;
	cout<<setprecision(2);

	cin>>a>>b>>c;

	d = pow(b,2)-(4*a*c);
	
	if(d>0){
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		cout<<fixed<<x1<<" "<<x2;
	}
	if(d==0){
		x1 =(-b)/(2*a);
		cout<<fixed<<x1<<" "<<x1;
	}
	if(d<0){
		cout<<"NO";
	}
	
	
}
