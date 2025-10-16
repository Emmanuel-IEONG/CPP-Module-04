/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:20:26 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 11:06:06 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << LBLACK "WrongAnimal Default constructor called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << LBLACK "WrongAnimal Copy constructor called" RESET << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << LBLACK "WrongAnimal Destructor called" RESET << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << LBLACK "WrongAnimal Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "[ Inaudible WrongAnimal sound ]" << std::endl;
}

