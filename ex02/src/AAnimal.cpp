/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:59:49 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 15:20:37 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << LBLACK "AAnimal Default constructor called" RESET << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << LBLACK "AAnimal Copy constructor called" RESET << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << LBLACK "AAnimal Destructor called" RESET << std::endl;
}

AAnimal &	AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << LBLACK "AAnimal Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}


void	AAnimal::makeSound() const
{
	std::cout << "[ Inaudible animal sound ]" << std::endl;
}
