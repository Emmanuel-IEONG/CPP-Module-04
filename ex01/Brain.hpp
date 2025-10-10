/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:45:56 by eieong            #+#    #+#             */
/*   Updated: 2025/10/10 13:53:13 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
	#define BRAIN_HPP
	#include <iostream>

	class	Brain
	{
		private:
			std::string	ideas[100];
		public:
			Brain();
			Brain(Brain const & src);
			~Brain();

			Brain &	operator=(Brain const & rhs);
	};

#endif
