/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:10:56 by eieong            #+#    #+#             */
/*   Updated: 2025/10/14 16:13:24 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("No name")
{
	std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const & src)
{
	std::cout << "Character Copy constructor called" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		this->_inventory[i] = src._inventory[i];
	*this = src;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character Parametric constructor called" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}

Character &	Character::operator=(Character const & rhs)
{
	std::cout << "Character Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < MAX_MATERIA; i++)
			this->_inventory[i] = rhs._inventory[i];
	}

	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << m->getType() << " materia equiped in inventory" << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= MAX_MATERIA)
		std::cout << "Error: Invalid index" << std::endl;
	else if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_inventory[idx]->getType() << " materia unequiped" << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "No materia equiped at index [" << idx << "]" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= MAX_MATERIA)
		std::cout << "Error: Invalid index" << std::endl;
	else if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		std::cout << "No materia equiped at index [" << idx << "]" << std::endl;
}
