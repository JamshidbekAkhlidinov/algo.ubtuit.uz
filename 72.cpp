#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
float faktr(float n){
  std::cout<<setprecision(8);
  float s=1;
  for(float i=1; i<=n; i++){
    s*=i;
  }
  return s;
}


using namespace std;
int main(){
	
	cout<<setprecision(8);
		
	float n,x;
	cin>>n>>x;
	
	float s=0;
	
	for(float i=1; i<=n; i++){
		s+= pow(x,2*i-2)/(faktr(2*i-2));
	}
	
	cout<<setprecision(3);
	cout<<fixed<<s;
	
	
	
}