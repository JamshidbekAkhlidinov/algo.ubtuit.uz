#include <iostream>
#include <cmath>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	float a,b,c;
	float mi;
	cin>>a>>b>>c;
	if(a<1 && b<1 && c<1){
		mi = min(min(a,b),c);
	}
	if(mi==a) 
		a = (b+c)/2;
	if(mi==b)
		b = (a+c)/2;
	if(mi==c)
		c = (a+b)/2;
		
	cout<<a<<" "<<b<<" "<<c;
	
}