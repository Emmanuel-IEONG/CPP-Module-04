/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:05:50 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 15:15:18 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << LBLUE "Cat Default constructor called" RESET << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src)
{
	std::cout << LBLUE "Cat Copy constructor called" RESET << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << LBLUE "Cat Destructor called" RESET << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << LBLUE "Cat Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << BLUE "Meooooow" RESET << std::endl;
}
