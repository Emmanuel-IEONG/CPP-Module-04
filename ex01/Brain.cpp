/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:46:01 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 11:48:26 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _ideas(NULL), _size_idea(100)
{
	std::cout << "Brain Default constructor called" << std::endl;
	this->_ideas = new std::string[this->_size_idea];
	for (int i = 0; i < this->_size_idea; i++)
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
	delete [] this->_ideas;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_ideas = rhs.getIdeas();
	return (*this);
}

std::string*	Brain::getIdeas() const
{
	return (this->_ideas);
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < this->_size_idea)
		return (this->_ideas[index]);
	else
		std::cerr << "Error: invalid index" << std::endl;
	return (NULL);
}

void	Brain::setIdea(std::string idea, int index)
{
	if (index >= 0 && index < this->_size_idea)
		this->_ideas[index] = idea;
	else
		std::cerr << "Error: invalid index" << std::endl;
}
