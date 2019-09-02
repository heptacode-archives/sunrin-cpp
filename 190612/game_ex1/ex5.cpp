#include<iostream>

int main()
{
	int k, n = 0, sum = 0;
	std::cout << "input num(>0): ";
	std::cin >> n;

	for (k = 1; k <= n; k++)
		sum += k;

	std::cout << "sum(1~" << n << "): " << sum << std::endl;
}