#include <iostream>
#include "memoize.h"
using namespace std;

unsigned long long memofib(unsigned long long v1)
{
	if (v1 == 0 || v1 == 1)
		return 1;
	return memoize(memofib, v1 - 1) + memoize(memofib, v1 - 2);
}
unsigned long long fib(unsigned long long v1)
{
	if (v1 == 0 || v1 == 1)
		return 1;
	return fib(v1 - 1) + fib(v1 - 2);
}

int main(void)
{
	unsigned long long i = 0;
	cout << "Memoized\n";
	for( i = 0; i <93; ++i)
	{
		cout << memoize(memofib, i) << endl;
	}
	cout << "Non-Memoized\n";
	for( i = 0; i <36; ++i)
	{
		cout << fib(i) << endl;
	}
	return 0;
}
