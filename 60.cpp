#include <iostream>
#include <cmath>


//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	float x,y;
	cin>>x>>y;
	
	if(x*x+y*y<=1 and x>=0){
		cout<<"yes";
	}else if((y<=0.5*x+1 and y>=-0.5*x-1  and x*x+y*y<=1) ){
		cout<<"yes";
	}else{
		cout<<"no";
	}

	
}