#include <iostream>
#include <math.h>
typedef long double lg;
using namespace std;
lg stupidPow(lg x, lg a);
lg factorial(lg x);
long double myPow(lg x,lg a,lg e){
	const lg mc = 0.0000001;
	long double buf = 0;
	long double s = 1;
	int i =1;
	while (true){
		buf = stupidPow(x,i)/(factorial(i));

		for (int j = 0; j<i;j++){
			buf*=(a-j);
		}
		if ((abs(buf) < e) || (abs(buf)-e <= mc)){
				return s;
		}
		s+=buf;
		i++;
		//cout <<buf <<" "<< factorial(x) <<"\n";
	}

}
long double stupidPow(lg x,lg a){
	lg buf = x;
	for (int i =1; i<a;i++){
		x*=buf;
	}
	return x;
}

lg factorial(lg x){
	lg s =1;
	for (int i =1; i<=x;i++){
			s*=i;
	}
	return s;
}


int main(){
  cout.setf(std::ios::fixed);
  cout.precision(10);
  //cout << factorial(2)<< "\n";
  //cout << stupidPow(2,4)<<"\n";
	lg x,a,e;

	cin >> x>> a>>e;
	cout << myPow(x,a,e)<<" "<< pow((1+x),a)<<"\n";
	cout << "0.5 100 0.000001"<<"\n";
	cout <<	myPow(0.5,100, 0.000001) << " "<< pow(1+0.5,100)<<"\n" ;
	cout <<	myPow(0.5,100, 0.00001) << " "<< pow(1+0.5,100)<<"\n" ;
	cout <<	myPow(0.5,100, 0.0001) << " "<< pow(1+0.5,100)<<"\n" ;
	cout <<	myPow(0.5,100, 0.001) << " "<< pow(1+0.5,100)<<"\n" ;
	cout <<	myPow(0.5,100, 0.01) << " "<< pow(1+0.5,100)<<"\n" ;
	cout <<	myPow(0.5,100, 0.1) << " "<< pow(1+0.5,100)<<"\n" ;
	return 0;
}
