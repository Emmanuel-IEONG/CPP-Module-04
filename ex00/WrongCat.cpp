/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:20:28 by eieong            #+#    #+#             */
/*   Updated: 2025/10/10 13:24:38 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meooooow" << std::endl;
}
