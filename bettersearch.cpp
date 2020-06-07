#include <iostream>
using namespace std;

int main() {
  int x, a, b;
  cin >> x;
  a = x/2;
  while(a<=x){
  	for(b=2;b<=a;b++){
  		if(a%b==0){
  			if(a*b>x && a/b<x){
  				cout << a << " " << b;
  				return 0;
			  }
		  }
	  }
  	a++;
  }
	cout << "-1";
 	 return 0;
}

