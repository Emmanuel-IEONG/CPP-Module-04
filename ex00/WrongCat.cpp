/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:20:28 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 11:06:28 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << LBLACK "WrongCat Default constructor called" RESET << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << LBLACK "WrongCat Copy constructor called" RESET << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << LBLACK "WrongCat Destructor called" RESET << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << LBLACK "WrongCat Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meooooow" << std::endl;
}
