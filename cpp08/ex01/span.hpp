/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:25:11 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/12 16:25:42 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>

class	Span
{
	public:
		Span(unsigned int N);
		Span(Span const & span);
		~Span(void);

		Span&	operator=(Span const & span);

		void	showNumbers(void);
		void	addNumber(int number);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		template < typename T >
		void	addNumber(T& begin, T& end)
		{
			for (; begin != end; begin++)
				this->addNumber(*begin);
			return ;
		}

	private:
		Span(void);
		
		std::list<int>	_data;
		unsigned int	_size;
};

#endif
