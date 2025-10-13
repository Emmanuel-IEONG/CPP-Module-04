/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:05:50 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 15:09:44 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src) : AAnimal()
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meooooow" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::setBrain(std::string idea, int index)
{
	this->_brain->setIdea(idea, index);
}
