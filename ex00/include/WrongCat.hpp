/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:20:29 by eieong            #+#    #+#             */
/*   Updated: 2025/10/21 14:13:56 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
	#define WRONGCAT_HPP
	#include "WrongAnimal.hpp"
	#include <iostream>

	class	WrongCat : public WrongAnimal
	{
		public:
			WrongCat();
			WrongCat(WrongCat const & src);
			~WrongCat();

			WrongCat &	operator=(WrongCat const & rhs);

			void	makeSound() const;
	};

#endif
