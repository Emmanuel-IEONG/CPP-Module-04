/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:45:56 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 11:44:07 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
	#define BRAIN_HPP
	#include <iostream>

	class	Brain
	{
		private:
			std::string*	_ideas;
			int	_size_idea;
		public:
			Brain();
			Brain(Brain const & src);
			~Brain();

			Brain &	operator=(Brain const & rhs);
			
			std::string*	getIdeas() const;
			std::string		getIdea(int index) const;
			void			setIdea(std::string idea, int index);
	};

#endif
