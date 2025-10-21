/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:10:51 by eieong            #+#    #+#             */
/*   Updated: 2025/10/21 16:38:34 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
	#define CHARACTER_HPP
	#include <iostream>
	#include "ICharacter.hpp"
	#include "AMateria.hpp"
	#include "Ice.hpp"
	#include "Cure.hpp"
	#include "colors.hpp"
	#define MAX_MATERIA 4

	class	Character : virtual public ICharacter
	{
		private:
			std::string	_name;
			AMateria*	_inventory[MAX_MATERIA];
		public:
			Character();
			Character(Character const & src);
			Character(std::string name);
			~Character();

			Character &	operator=(Character const & rhs);
			
			std::string const &	getName() const;
			void	equip(AMateria* m);
			void	unequip(int idx);
			void	use(int idx, ICharacter& target);
			// AMateria*	getMateria(int idx); // Facilitate the use of "unequip()" but have to change ICharacter...
	};
#endif
