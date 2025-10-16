/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:57:10 by eieong            #+#    #+#             */
/*   Updated: 2025/10/15 10:46:47 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
	#define IMATERIASOURCE_HPP
	#include <iostream>
	#include "AMateria.hpp"

	class	IMateriaSource
	{
		public:
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria* src) = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;
	};

#endif
