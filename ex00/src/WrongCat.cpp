/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:20:28 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 15:15:22 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << LBLUE "WrongCat Default constructor called" RESET << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << LBLUE "WrongCat Copy constructor called" RESET << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << LBLUE "WrongCat Destructor called" RESET << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << LBLUE "WrongCat Copy assignment operator called" RESET << std::endl;

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << BLUE "Meooooow" RESET << std::endl;
}
