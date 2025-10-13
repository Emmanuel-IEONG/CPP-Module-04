/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:46:01 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 13:39:24 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < SIZE_IDEA; i++)
		this->_ideas[i] = "No idea";
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		for (int i = 0; i < SIZE_IDEA; i++)
			this->_ideas[i] = rhs.getIdea(i);
	}
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < SIZE_IDEA)
		return (this->_ideas[index]);
	else
		std::cerr << "Error: invalid index" << std::endl;
	return ("");
}

void	Brain::setIdea(std::string idea, int index)
{
	if (index >= 0 && index < SIZE_IDEA)
		this->_ideas[index] = idea;
	else
		std::cerr << "Error: invalid index" << std::endl;
}
