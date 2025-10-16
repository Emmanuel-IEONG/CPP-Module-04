/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:20:29 by eieong            #+#    #+#             */
/*   Updated: 2025/10/10 13:24:47 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
	#define WRONGCAT_HPP
	#include "WrongAnimal.hpp"
	#include <iostream>

	class	WrongCat : public WrongAnimal
	{
		private:

		public:
			WrongCat();
			WrongCat(WrongCat const & src);
			~WrongCat();

			WrongCat &	operator=(WrongCat const & rhs);

			void	makeSound() const;
	};

#endif
