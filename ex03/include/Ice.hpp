/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:23:28 by eieong            #+#    #+#             */
/*   Updated: 2025/10/15 11:50:32 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
	#define ICE_HPP
	#include <iostream>
	#include "AMateria.hpp"
	#include "colors.hpp"

	class	Ice : virtual public AMateria
	{
		private:

		public:
			Ice();
			Ice(Ice const & src);
			~Ice();

			Ice &	operator=(Ice const & rhs);
			AMateria* clone() const;
			void use(ICharacter& target);
	};

#endif
