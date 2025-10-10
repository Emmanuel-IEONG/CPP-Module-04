/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:20:26 by eieong            #+#    #+#             */
/*   Updated: 2025/10/10 13:22:18 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;

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

