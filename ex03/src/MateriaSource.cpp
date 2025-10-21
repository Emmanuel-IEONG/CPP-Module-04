/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:58:21 by eieong            #+#    #+#             */
/*   Updated: 2025/10/21 13:01:59 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << LMAGENTA "MateriaSource Default constructor called" RESET << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << LMAGENTA "MateriaSource Copy constructor called" RESET << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		this->_materias[i] = src._materias[i];
	*this = src;
}

MateriaSource::~MateriaSource()
{
	std::cout << LMAGENTA "MateriaSource Destructor called" RESET << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}

}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		for (int i = 0; i < MAX_MATERIA; i++)
		{
			if (this->_materias[i] != NULL)
				delete this->_materias[i];
			this->_materias[i] = rhs._materias[i];
		}
	}

	return (*this);
}

void	MateriaSource::learnMateria(AMateria* src)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = src;
			std::cout << LMAGENTA "* Materia source learned " << src->getType() << " *" RESET << std::endl;
			return ;
		}
	}
	std::cout << LMAGENTA "* Materia source is full *" RESET << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_materias[i]->getType() == type)
		{
			std::cout << LMAGENTA "* " << type << " materia created from Materia source *" RESET << std::endl;
			return (this->_materias[i]->clone());
		}
	}
	std::cout << LMAGENTA "* Unknown type: " << type << " *" RESET << std::endl;
	return (NULL);
}
