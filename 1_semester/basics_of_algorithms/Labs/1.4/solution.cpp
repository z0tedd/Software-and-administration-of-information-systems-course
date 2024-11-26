#include <iostream>
#include <math.h>
int main(){
	/*1
	int n;
	std::cin>>n;
	double res, buffer;
	buffer = res = 0;
	for (int i=1; i<n+1;i++){
		//std::cout << i;
		buffer += sin(i);
		res += i/(buffer);
	}
	std::cout<<res;
	*/
/*2
	double a;
	std::cin >> a;
	double n = 1.0;
	if (a==0){
		std::cout << exp(1);
		return 0;
	}
	double res =0;
	while (1/n > a){
		res+= 1/n;
		n++;
	}
	std::cout << res;
*/
/*3
	double a1;
	std::cin >> a1;
	if (a1==0){
		std::cout << exp(1);
		return 0;
	}
	if (a1==1){
		std::cout<<0;
		return 0;
	}
	double n1 = 0;
	double res1 = 0;
	do {
		n1++;
		res1+=1/n1;

	}
	while (1/(n1+1)>a1);
	std::cout << res1;
*/
	int k,buff;
	buff = 1;
	std::cin >> k;
	for (int j =1; j<k;j++){
	//while(true){
		//int j = 28;
		int super = sqrt(j);
		//std::cout<<super<<std::endl;
		for (int i=2;i<=super;i++){
			if (j%i==0){
				buff+=i+j/i;
			}
		}
		//std::cout<<buff<<std::endl;
		if (j == buff and j!=1){
			std::cout<< j<<std::endl;
		}
		buff = 1;
}

	return 0;
}
