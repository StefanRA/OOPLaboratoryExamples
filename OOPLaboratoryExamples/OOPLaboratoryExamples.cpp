/***************************************************************************************************
Object-oriented programming Laboratory
Author: Stefan Rapeanu-Andreescu
***************************************************************************************************/

#include "stdafx.h"
#include "Rectangle.hpp"

int main()
{
	Rectangle r1(1, 2);
	Rectangle r2(2, 1);
	Rectangle r3;

	std::cout << "Give the width and the height for r3: ";
	std::cin >> r3;

	std::cout << "R1: " << r1 << '\n';
	std::cout << "R2: " << r2 << '\n';
	std::cout << "R3: " << r3 << '\n';

	system("pause");
    return 0;
}

