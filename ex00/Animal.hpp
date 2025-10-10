/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:59:55 by eieong            #+#    #+#             */
/*   Updated: 2025/10/10 12:03:34 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
	#define ANIMAL_HPP
	#include <iostream>

	class	Animal
	{
		protected:
			std::string	_type;
		public:
			Animal();
			Animal(Animal const & src);
			~Animal();

			Animal &	operator=(Animal const & rhs);

			std::string	getType() const;
			virtual void	makeSound() const;
	};

#endif
