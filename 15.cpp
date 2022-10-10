#include <iostream>
#include <cmath>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	double r1,r2,r3,ru;
	cin>>r1;
	cin>>r2;
	cin>>r3;
	 ru = (1/r1+1/r2+1/r3);
	 ru = 1/ru;	
	
	cout.precision(2);
	cout<<fixed<<ru;
}   