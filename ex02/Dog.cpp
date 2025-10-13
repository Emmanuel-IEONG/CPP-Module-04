/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:05:58 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 15:09:37 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) : AAnimal()
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain(*(src.getBrain()));
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "BARK BARK" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::setBrain(std::string idea, int index)
{
	this->_brain->setIdea(idea, index);
}
