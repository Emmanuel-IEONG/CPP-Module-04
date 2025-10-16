/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:59:49 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 11:04:31 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << LBLACK "Animal Default constructor called" RESET << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << LBLACK "Animal Copy constructor called" RESET << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << LBLACK "Animal Destructor called" RESET << std::endl;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	std::cout << LBLACK "Animal Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "[ Inaudible animal sound ]" << std::endl;
}
