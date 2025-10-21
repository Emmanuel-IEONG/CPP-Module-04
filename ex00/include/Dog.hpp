/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:06:10 by eieong            #+#    #+#             */
/*   Updated: 2025/10/21 14:13:51 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	#define DOG_HPP
	#include "Animal.hpp"
	#include <iostream>

	class	Dog : public Animal
	{
		public:
			Dog();
			Dog(Dog const & src);
			~Dog();

			Dog &	operator=(Dog const & rhs);

			void	makeSound() const;
	};

#endif
