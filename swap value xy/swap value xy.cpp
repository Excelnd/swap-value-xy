// swap value xy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int x = 5;
	int y = 6;
	x = x + y; // 11
	y = x - y; // 5
	x = x - y; // 6 (11 - 5), xy 65

	std::cout << x << y;
    return 0;
}

