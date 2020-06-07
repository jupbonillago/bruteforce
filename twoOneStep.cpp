#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
  int x, a, b, test;
  cin >> x;
  if(x==1){
  	cout << "-1";
  	return 0;
  }
  test = (floor(x/2)+1);
  	if ( test % 2== 0){ 
  	a = floor(x/2)+1;
  	b = 2;
	}
	else{
	a = floor(x/2)+2;
	b = 2;
	}
	
	cout << a << " " << b;
  	return 0;
}

