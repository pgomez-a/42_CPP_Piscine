#include "serial.hpp"

int	main(void)
{
	Data		walle;
	Data*		uint_ptr = NULL;
	uintptr_t	uint_raw = 0;

	walle.strOne = "Wall-E";
	walle.intOne = 3;
	walle.strTwo = "Dall-E";

	std::cout << "*** CONTENT OF DATA ***" << std::endl;
	std::cout << "Data1 --> " << walle.strOne << std::endl;
	std::cout << "Data2 --> " << walle.intOne << std::endl;
	std::cout << "Data3 --> " << walle.strTwo << std::endl;
	std::cout << std::endl;

	std::cout << "*** VALUES BEFORE SERIAL ***" << std::endl;
	std::cout << "&walle   --> " << &walle << std::endl;
	std::cout << "uint_ptr --> " << uint_ptr << std::endl;
	std::cout << "uint_raw --> " << uint_raw << std::endl;
	std::cout << std::endl;

	std::cout << "*** CALL SERIAL FUNCTIONS ***" << std::endl;
	uint_raw = serialize(&walle);
	uint_ptr = deserialize(uint_raw);
	std::cout << std::endl;

	std::cout << "*** VALUES AFTER SERIAL ***" << std::endl;
	std::cout << "&walle   --> " << &walle << std::endl;
	std::cout << "uint_ptr --> " << uint_ptr << std::endl;
	std::cout << "uint_raw --> " << uint_raw << std::endl;
	std::cout << std::endl;

	std::cout << "*** CHECK IF VALUES ***" << std::endl;
	std::cout << "Data1: --> " << uint_ptr->strOne << std::endl;
	std::cout << "Data2: --> " << uint_ptr->intOne << std::endl;
	std::cout << "Data3: --> " << uint_ptr->strTwo << std::endl;
	std::cout << std::endl;

	std::cout << "*** SIZEOF VALUES ***" << std::endl;
	std::cout << "sizeof(walle)     --> " << sizeof(walle) << std::endl;
	std::cout << "sizeof(*uint_ptr) --> " << sizeof(*uint_ptr) << std::endl;

	return (0);
}
