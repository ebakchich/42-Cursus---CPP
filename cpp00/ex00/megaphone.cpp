#include <iostream>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
		for (int x = 0; av[i][x]; x++)
			std::cout << (char)toupper(av[i][x]);
	std::cout << std::endl;
	return (0);
}