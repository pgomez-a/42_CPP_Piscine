#include <iostream>

int	main(int argc, char *argv[])
{
	std::string	user_input;
	int		count_y;
	int		count_x;

	if (argc > 1)
	{
		count_y = 1;
		while (argv[count_y])
		{
			count_x = 0;
			while (argv[count_y][count_x])
			{
				if (argv[count_y][count_x] >= 'a' && argv[count_y][count_x] <= 'z')
					user_input += argv[count_y][count_x] - 32;
				else
					user_input += argv[count_y][count_x];
				count_x++;
			}
			count_y++;
		}
		std::cout << user_input << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
