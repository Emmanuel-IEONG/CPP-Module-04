/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:45:56 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 13:35:15 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
	#define BRAIN_HPP
	#include <iostream>

	#define SIZE_IDEA 100
	
	class	Brain
	{
		private:
			std::string	_ideas[SIZE_IDEA];
		public:
			Brain();
			Brain(Brain const & src);
			~Brain();

			Brain &	operator=(Brain const & rhs);
			
			std::string		getIdea(int index) const;
			void			setIdea(std::string idea, int index);
	};

#endif
