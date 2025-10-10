/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:20:27 by eieong            #+#    #+#             */
/*   Updated: 2025/10/10 13:35:40 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
	#define WRONGANIMAL_HPP
	#include <iostream>

	class	WrongAnimal
	{
		protected:
			std::string	_type;
		public:
			WrongAnimal();
			WrongAnimal(WrongAnimal const & src);
			virtual ~WrongAnimal();

			WrongAnimal &	operator=(WrongAnimal const & rhs);

			std::string	getType() const;
			void	makeSound() const;
	};

#endif
