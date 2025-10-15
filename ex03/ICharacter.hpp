/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:15:36 by eieong            #+#    #+#             */
/*   Updated: 2025/10/15 11:50:40 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
	#define ICHARACTER_HPP
	#include <iostream>

	class	AMateria;

	class	ICharacter
	{
		public:
			virtual ~ICharacter() {}
			virtual std::string const & getName() const = 0;
			virtual void equip(AMateria* m) = 0;
			virtual void unequip(int idx) = 0;
			virtual void use(int idx, ICharacter& target) = 0;
	};

#endif
