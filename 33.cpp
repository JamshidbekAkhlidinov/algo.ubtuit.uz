#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	
	cout<<setprecision(2)<<fixed<<max(max(max(a+b+c,a),b),c)<<" "<<min(min(min(a+b/2,a),b),c)*min(min(min(a+b/2,a),b),c);
}

