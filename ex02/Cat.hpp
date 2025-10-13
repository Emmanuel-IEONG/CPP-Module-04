/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:06:03 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 15:09:27 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
	#define CAT_HPP
	#include "AAnimal.hpp"
	#include "Brain.hpp"
	#include <iostream>

	class	Cat : public AAnimal
	{
		private:
			Brain*	_brain;
		public:
			Cat();
			Cat(Cat const & src);
			~Cat();

			Cat &	operator=(Cat const & rhs);

			void	makeSound() const;
			Brain*	getBrain() const;
			void	setBrain(std::string idea, int index);
	};

#endif
