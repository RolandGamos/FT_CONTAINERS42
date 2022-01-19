#include "tests/tests.hpp"

void	vector_tests(){
	std::cout << "Vector tests:" << std::endl << "_______________" << std::endl;
	vector_iterator_tests();
	std::cout << std::endl;
	reverse_iterator_tests();
	std::cout << std::endl;
	vector_modifiers_tests();
	std::cout << std::endl;
	vector_capacity_tests();
	std::cout << std::endl;
	vector_element_access_tests();
	std::cout << std::endl;
	vector_constructor_tests();
	std::cout << std::endl;
}

void	stack_tests(){
	std::cout << "Stack tests:" << std::endl << "_______________" << std::endl;
	stack_constructor_tests();
	std::cout << std::endl;
}

int main()
{
	vector_tests();
	stack_tests();
	return (0);
}
