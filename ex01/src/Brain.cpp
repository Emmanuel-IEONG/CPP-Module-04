/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:46:01 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 15:10:30 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << LMAGENTA "Brain Default constructor called" RESET << std::endl;
	for (int i = 0; i < SIZE_IDEA; i++)
		this->_ideas[i] = "No idea";
}

Brain::Brain(Brain const & src)
{
	std::cout << LMAGENTA "Brain Copy constructor called" RESET << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << LMAGENTA "Brain Destructor called" RESET << std::endl;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	std::cout << LMAGENTA "Brain Copy assignment operator called" RESET << std::endl;

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
