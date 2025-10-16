/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:05:58 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 11:05:20 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << LBLACK "Dog Default constructor called" RESET << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & src)
{
	std::cout << LBLACK "Dog Copy constructor called" RESET << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << LBLACK "Dog Destructor called" RESET << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << LBLACK "Dog Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "BARK BARK" << std::endl;
}
