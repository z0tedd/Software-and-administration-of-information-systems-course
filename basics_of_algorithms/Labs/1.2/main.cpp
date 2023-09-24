#include <iostream>
#include <math.h>
using namespace std;

const long double Pi = acos(-1.0);
int main(){
  //first task
  /*
  long double x, y, Result;
	cin >> x >> y;
	long double BigSquare = pow((x*pow(1+x,2)*pow(1+2*x,3))/(log(abs(tan(Pi/2-y)))),1.0/3);
	Result = pow(x*pow(1+x,2)*pow(1+2*x,3)+ BigSquare, 1.0/5);
	cout << Result;
	*/
	//second task
	///*
	long double a,b,alfa,h, result;
	cin >> a >> b >> alfa;
	h = (abs(a-b))/2 * tan(alfa * Pi / 180.0);
	result =floor(h*(a+b)/2);
	cout<< result;
	//*/
	//Third task
	/*
	int x,Result;
	cin >> x;
	Result = (x/100)*100 + (x/10)%10 + (x%10)*10;
	cout<< Result<< x%10;
	*/
	return 0;
}
