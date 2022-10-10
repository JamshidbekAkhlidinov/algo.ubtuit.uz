#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	float r1,r2,r3;
	float s1,s2,s3;
	
	cin>>r1>>r2>>r3;
	s1 = M_PI*pow(r1,2);
	s2 = M_PI*pow(r2,2);
	s3 = M_PI*pow(r3,2);
	cout<<setprecision(2) << fixed<<s1<<" "<<s2<<" "<<s3;
	
}