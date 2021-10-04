/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:38:48 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:41:02 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

# include <iostream>
# include <fstream>

class	Sed
{
	public:
		Sed(std::string file_name);
		~Sed(void);

		int		open_src_file(void);
		int		open_dst_file(void);
		void	src_to_dst_file(std::string s1, std::string s2);
		void	replace(std::string& data, std::string s1, std::string s2);

	private:
		std::ifstream	_file_src;
		std::ofstream	_file_dst;
		std::string		_file_name;
		std::string		_file_replace;

		int		_src_open;
		int		_dst_open;
};

#endif
