/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:23:23 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 16:06:07 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	std::cout << "Ice Default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(Ice const & src) :AMateria()
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
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
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
