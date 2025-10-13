/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:23:28 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 15:54:16 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
	#define ICE_HPP
	#include <iostream>
	#include "AMateria.hpp"

	class	Ice : public AMateria
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
