/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:13:19 by eieong            #+#    #+#             */
/*   Updated: 2025/10/15 11:50:10 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
	#define AMATERIA_HPP
	#include <iostream>
	#include "ICharacter.hpp"
	#include "colors.hpp"

	class	AMateria
	{
		protected:
			std::string	_type;
		public:
			AMateria();
			AMateria(AMateria const & src);
			AMateria(std::string const & type);
			virtual ~AMateria();

			AMateria &	operator=(AMateria const & rhs);

			std::string const & getType() const; //Returns the materia type
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
	};

#endif
