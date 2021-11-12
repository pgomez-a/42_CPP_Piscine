/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:27:02 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/12 16:49:49 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template < typename T, typename Container = std::deque<T> >	
class	MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(void) : std::stack<T, Container>() {}
		MutantStack(MutantStack const & mstack) : std::stack<T, Container>(mstack) {}
		MutantStack(std::stack<T> const & stack) : std::stack<T, Container>(stack) {}
		virtual ~MutantStack(void) {}


		typedef typename Container::iterator iterator;

		iterator	begin(void)
		{
			return (std::begin(std::stack<T, Container>::c));
		}

		iterator const	begin(void) const
		{
			return (std::begin(std::stack<T, Container>::c));
		}

		iterator	end(void)
		{
			return (std::end(std::stack<T, Container>::c));
		}

		iterator const	end(void) const
		{
			return (std::end(std::stack<T, Container>::c));
		}

};

#endif
