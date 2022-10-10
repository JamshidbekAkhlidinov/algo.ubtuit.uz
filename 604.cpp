#include <iostream>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	int x,a;
	
	cin>>x>>a;
	int i = x;
	while(true){ 
		if(i%a==0 and i>a){
			cout<<i;
			break;
		}
		i++;
	}
	
}   