/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:59:49 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 15:07:02 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal &	AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;

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
