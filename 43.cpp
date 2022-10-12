#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	float x,y,m;
	
	cin>>x>>y;
	cout<<setprecision(2);
	
	if(x<0.0 && y<0.0){
		cout<<fixed<<abs(x)<<" "<<abs(y);
	}
	if((x>0.0 && y<0.0) || (x<0.0 && y>0.0)){
		cout<<fixed<<x+0.5<<" "<<y+0.5;
	}
	if(x>0.0 && y>0.0){
		cout<<fixed<<x<<" "<<y;
	}
	
	
}
