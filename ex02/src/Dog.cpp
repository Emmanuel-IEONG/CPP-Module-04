/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:05:58 by eieong            #+#    #+#             */
/*   Updated: 2025/10/22 12:15:21 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << LRED "Dog Default constructor called" RESET << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) : AAnimal()
{
	std::cout << LRED "Dog Copy constructor called" RESET << std::endl;
	this->_brain = new Brain(*(src.getBrain()));
	*this = src;
}

Dog::~Dog()
{
	std::cout << LRED "Dog Destructor called" RESET << std::endl;
	delete this->_brain;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << LRED "Dog Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
	{
		delete this->_brain;
		this->_brain = new Brain(*(rhs.getBrain()));
		this->_type = rhs._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << RED "BARK BARK" RESET << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::setBrain(std::string idea, int index)
{
	this->_brain->setIdea(idea, index);
}
