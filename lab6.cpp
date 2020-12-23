// lab6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int arythmeticprogression(int, int, int);

int main()
{
	int n{ 10 };
	int a1{ 10 };
	int d{ 2 };

	std::cout << ((arythmeticprogression(n, d, a1) + a1)*n)/2 ;
}

int arythmeticprogression(int count, int step, int Firstnum)
{
	int a_n;
	if (count == 1)
	{
		a_n = Firstnum;
	}
	else a_n = arythmeticprogression(count-1,  step, Firstnum) + step;
	return a_n;

}