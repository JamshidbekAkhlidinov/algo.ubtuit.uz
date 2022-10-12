#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	float a,b,c,d,m;
	
	cin>>a>>b>>c>>d;
	cout<<setprecision(2);
	
	if(a<=b && b<=c && c<=d){
		m = max(max(max(a,b),c),d);
		cout<<fixed<<m<<" "<<m<<" "<<m<<" "<<m;
	}else{
		m = min(min(min(a,b),c),d);
		cout<<fixed<<m<<" "<<m<<" "<<m<<" "<<m;
	}
	
}
