/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:05:50 by eieong            #+#    #+#             */
/*   Updated: 2025/10/22 12:15:03 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << LBLUE "Cat Default constructor called" RESET << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src) : Animal()
{
	std::cout << LBLUE "Cat Copy constructor called" RESET << std::endl;
	this->_brain = new Brain(*(src.getBrain()));
	*this = src;
}

Cat::~Cat()
{
	std::cout << LBLUE "Cat Destructor called" RESET << std::endl;
	delete this->_brain;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << LBLUE "Cat Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
	{
		delete this->_brain;
		this->_brain = new Brain(*(rhs.getBrain()));
		this->_type = rhs._type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << BLUE "Meooooow" RESET << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::setBrain(std::string idea, int index)
{
	this->_brain->setIdea(idea, index);
}
