/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:23:14 by eieong            #+#    #+#             */
/*   Updated: 2025/10/15 11:55:15 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	std::cout << GREEN "Cure Default constructor called" RESET << std::endl;
	this->_type = "cure";
}

Cure::Cure(Cure const & src) : AMateria()
{
	std::cout << GREEN "Cure Copy constructor called" RESET << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << GREEN "Cure Destructor called" RESET << std::endl;
}

Cure &	Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << LGREEN "* heals " << target.getName() << "'s wounds *" RESET << std::endl;
}
