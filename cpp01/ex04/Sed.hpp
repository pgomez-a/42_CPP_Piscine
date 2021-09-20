#ifndef SED_H
# define SED_H

# include <iostream>
# include <fstream>

class	Sed
{
	public:
		std::ifstream	file_src;
		std::ofstream	file_dst;
		std::string	file_name;
		std::string	file_replace;

		Sed(std::string file_name);
		~Sed(void);

		int	open_src_file(void);
		int	open_dst_file(void);
		void	src_to_dst_file(std::string s1, std::string s2);
		void	replace(std::string& data, std::string s1, std::string s2);
	private:
		int	_src_open;
		int	_dst_open;
};

#endif
