/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:06:03 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 10:28:39 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
	#define CAT_HPP
	#include "Animal.hpp"
	#include "Brain.hpp"
	#include <iostream>

	class	Cat : public Animal
	{
		private:
			Brain*	_brain;
		public:
			Cat();
			Cat(Cat const & src);
			~Cat();

			Cat &	operator=(Cat const & rhs);

			void	makeSound() const;
	};

#endif
