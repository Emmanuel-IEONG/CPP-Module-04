/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:59:55 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 14:33:37 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
	#define ANIMAL_HPP
	#include "colors.hpp"
	#include <iostream>

	class	Animal
	{
		protected:
			std::string	_type;
		public:
			Animal();
			Animal(Animal const & src);
			virtual ~Animal();

			Animal &	operator=(Animal const & rhs);

			std::string	getType() const;
			virtual void	makeSound() const;
	};

#endif
