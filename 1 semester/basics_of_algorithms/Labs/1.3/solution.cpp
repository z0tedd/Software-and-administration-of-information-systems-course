#include <iostream>
#include <wchar.h>
#include <locale>
//#include "uchar."
int main(){

*
	int a,b;
	std::cin>> a >> b;
	if ((a%2 - b%2)!=0)
		std::cout<<"Верно";


//Спросить про сравнение с плавающей точкой!!!
/*
	double x,y;
	std::cin >> x >> y;
	if ((-0.000001<=(y-0.5) and (y-1.5)<=0.000001) or (x-2.0>=-0.000001)){ //
			std::cout<<"Да";
	}
	else{
			std::cout<<"Нет";
	}
*/
	/*
	double x,y;
	std::cin >> x;
	if (-1.000001<=x and x<=1.000001){
		std::cout<< -x;
	}
	else{
		if (x>1){
			std::cout<<-1;
		}
		else{
			std::cout<<1;
		}
		//std::cout<<-1*((x>0) + ((x>0)%2-1));
	}
	*/
	/*setlocale(LC_ALL, "ru_RU.UTF-8");
	char a,b;
	std::cin>>a;
	std::cin>>b;

	std::cout<<a<<"%%%%%%"<<b<<std::endl;
	//std::cout<<a;

	switch(a)
	{
		case L'А':
			switch(b){
				case L'л':
					std::cout<< "Александр";
					break;
				case L'н':
					std::cout<< "Анатолий";
					break;
				case L'в':
					std::cout<< "Авдотий";
					break;
				default:
					std::cout<< "Имени нет";
					break;
			}
			//std::cout<<"Test";
			break;
		case L'И':
			switch(b){
				case L'в':
					std::cout<< "Иван";
					break;
				case L'г':
					std::cout<< "Игорь";
					break;
				case L'л':
					std::cout<< "Илья";
					break;
				default:
					std::cout<< "Имени нет";
					break;
			}

			//std::cout<<"Test";
			break;
		case L'П':
			switch(b){
				case L'а':
					std::cout<< "Павел";
					break;
				case L'е':
					std::cout<< "Петр";
					break;
				default:
					std::cout<< "Имени нет";
					break;
			}

			//std::cout<<"Test";
			break;
		default:
			std::cout<<"Имени нет";
			break;
	}
	*/
	return 0;
}
