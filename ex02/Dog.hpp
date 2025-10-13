/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:06:10 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 15:09:31 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
	#define DOG_HPP
	#include "AAnimal.hpp"
	#include "Brain.hpp"
	#include <iostream>

	class	Dog : public AAnimal
	{
		private:
			Brain*	_brain;
		public:
			Dog();
			Dog(Dog const & src);
			~Dog();

			Dog &	operator=(Dog const & rhs);

			void	makeSound() const;
			Brain*	getBrain() const;
			void	setBrain(std::string idea, int index);
	};

#endif
