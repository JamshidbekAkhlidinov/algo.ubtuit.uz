#include <iostream>
#include <cmath>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	cout<<max(max(a,b),c)<<" "<<min(min(a,b),c);
}

