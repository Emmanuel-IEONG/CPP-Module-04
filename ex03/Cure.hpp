/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:23:13 by eieong            #+#    #+#             */
/*   Updated: 2025/10/15 11:50:26 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
	#define CURE_HPP
	#include <iostream>
	#include "AMateria.hpp"
	#include "colors.hpp"
	
	class	Cure : virtual public AMateria
	{
		private:

		public:
			Cure();
			Cure(Cure const & src);
			~Cure();

			Cure &	operator=(Cure const & rhs);
			AMateria* clone() const;
			void use(ICharacter& target);
	};

#endif
