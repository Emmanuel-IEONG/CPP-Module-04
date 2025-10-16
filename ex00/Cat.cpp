/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:05:50 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 11:04:56 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << LBLACK "Cat Default constructor called" RESET << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src)
{
	std::cout << LBLACK "Cat Copy constructor called" RESET << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << LBLACK "Cat Destructor called" RESET << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << LBLACK "Cat Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meooooow" << std::endl;
}
