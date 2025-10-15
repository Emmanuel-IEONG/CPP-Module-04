/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:23:23 by eieong            #+#    #+#             */
/*   Updated: 2025/10/15 11:55:36 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	std::cout << BLUE "Ice Default constructor called" RESET << std::endl;
	this->_type = "ice";
}

Ice::Ice(Ice const & src) :AMateria()
{
	std::cout << BLUE "Ice Copy constructor called" RESET << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << BLUE "Ice Destructor called" RESET << std::endl;
}

Ice &	Ice::operator=(Ice const & rhs)
{
	std::cout << "Ice Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << CYAN "* shoots an ice bolt at " << target.getName() << " *" RESET << std::endl;
}
