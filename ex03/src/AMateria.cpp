/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:13:20 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 15:02:41 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() : _type("Materia")
{
	std::cout << GREY "AMateria Default constructor called" RESET << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << GREY "AMateria Copy constructor called" RESET << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << GREY "AMateria Parametric constructor called" RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << GREY "AMateria Destructor called" RESET << std::endl;
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
}
