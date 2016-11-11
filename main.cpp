#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	cout << "We have : flow velocity = sqrt(2g*(x-h)), where g : gravity, x : point A-B, point Z-Y\n\n";
	const float gg = 2*9.81;
	cout << gg << " is the gravity*2\n\n";
	float v;
	float x, h;
	float a, b, z, y;
	cin >> a >> b >> y >> z;
	x = b-a;
	h = z-y;
	v = sqrt(gg*(x-h));
	cout << "The flow velocity is : " << v;
	string choice;
	cout << "Again ? (Y|n) ";
	cin >> choice;
	if (choice == "Y" || choice == "y") {
		return main();
	}else if(v < 0){
		cout << "Impossible."; return main();
	}
	else{
		return 0;
	}
return 0;}
