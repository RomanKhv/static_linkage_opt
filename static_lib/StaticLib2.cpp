#include <iostream>

int fnStaticLib2()
{
	std::cout << "fnStaticLib2 (static lib private code)\n";
	return 7;
}

int i2 = fnStaticLib2();