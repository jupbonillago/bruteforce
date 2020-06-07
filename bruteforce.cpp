#include <iostream>
using namespace std;

int main() {
  int x, a, b;
  bool pair = false;
  cin >> x;
  //a = x/2;
  a = 0;
  while(a<=x){
  	for(b=1;b<=a;b++){
  		if(a%b==0){
  			if(a*b>x && a/b<x){
  				cout << a << " " << b;
  				a = x;
  				pair = true;
  				break;
			  }
		  }
	  }
  	
  	a++;
  }
	if(pair == false){
		cout << "-1";
	}
  
  return 0;
}

