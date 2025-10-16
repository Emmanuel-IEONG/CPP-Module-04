/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:59:55 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 15:20:47 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
	#define AANIMAL_HPP
	#include "colors.hpp"
	#include <iostream>

	class	AAnimal
	{
		protected:
			std::string	_type;
		public:
			AAnimal();
			AAnimal(AAnimal const & src);
			virtual ~AAnimal();

			AAnimal &	operator=(AAnimal const & rhs);

			std::string	getType() const;
			virtual void	makeSound() const = 0;
	};

#endif
