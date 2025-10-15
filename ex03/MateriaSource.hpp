/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:58:26 by eieong            #+#    #+#             */
/*   Updated: 2025/10/15 11:50:48 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
	#define MATERIASOURCE_HPP
	#include <iostream>
	#include "IMateriaSource.hpp"
	#include "AMateria.hpp"
	#include "colors.hpp"
	#define MAX_MATERIA 4

	class	MateriaSource : virtual public IMateriaSource
	{
		private:
			AMateria*	_materias[MAX_MATERIA];
		public:
			MateriaSource();
			MateriaSource(MateriaSource const & src);
			~MateriaSource();

			MateriaSource &	operator=(MateriaSource const & rhs);
			void	learnMateria(AMateria* src);
			AMateria*	createMateria(std::string const & type);
	};

#endif
