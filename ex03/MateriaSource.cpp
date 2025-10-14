/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:58:21 by eieong            #+#    #+#             */
/*   Updated: 2025/10/14 16:00:09 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		/* attributes to copy */
	}

	return (*this);
}

void	MateriaSource::learnMateria(AMateria*)
{
	
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	
}
