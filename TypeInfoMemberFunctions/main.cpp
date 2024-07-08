#include <iostream>
#include <typeinfo>

int main()
{
	std::cout << typeid(int).name() << '\n';
	std::cout << typeid(int).hash_code() << '\n';

	auto hashInt = typeid(int).hash_code();
	auto beforeFloatDouble = typeid(float).before(typeid(double));

	return 0;
}