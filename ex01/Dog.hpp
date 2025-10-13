/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:06:10 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 10:28:47 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	#define DOG_HPP
	#include "Animal.hpp"
	#include "Brain.hpp"
	#include <iostream>

	class	Dog : public Animal
	{
		private:
			Brain*	_brain;
		public:
			Dog();
			Dog(Dog const & src);
			~Dog();

			Dog &	operator=(Dog const & rhs);

			void	makeSound() const;
	};

#endif
