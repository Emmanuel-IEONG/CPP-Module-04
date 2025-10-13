/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:09:12 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 13:58:43 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void	print_newline()
{
	std::cout << std::endl;
}

int	main()
{
	std::cout << "/*~~~~~~~~~~~~~~~TAB TESTS~~~~~~~~~~~~~~~*/" << std::endl;
	int	tab_size = 5;
	const Animal*	animal[tab_size * 2];
	for (int i = 0; i < (tab_size * 2); i++)
	{
		if (i < tab_size)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}	
	print_newline();
	for (int i = 0; i < (tab_size * 2); i++)
	{
		std::cout << animal[i]->getType() << ": ";
		animal[i]->makeSound();
	}
	print_newline();
	for (int i = 0; i < (tab_size * 2); i++)
		delete animal[i];
	print_newline();

	std::cout << "/*~~~~~~~~~~~~~~~COPY TESTS~~~~~~~~~~~~~~~*/" << std::endl;
	const Dog*	dog = new Dog();
	print_newline();
	std::cout << "~Setting new idea~" << std::endl;
	dog->getBrain()->setIdea("New idea", 5);
	print_newline();
	Dog		dog2(*dog);
	print_newline();
	Dog*	dog3 = new Dog(*dog);
	print_newline();
	delete dog;
	
	print_newline();
	for (int i = 0; i < 10; i++)
	{
		if (!dog2.getBrain()->getIdea(i).empty())
			std::cout << "Copy dog2 idea: " << dog2.getBrain()->getIdea(i) << std::endl;
		else
			break ;
	}
	print_newline();
	for (int i = 0; i < 10; i++)
	{
		if (!(*dog3).getBrain()->getIdea(i).empty())
			std::cout << "Copy dog3 idea: " << (*dog3).getBrain()->getIdea(i) << std::endl;
		else
			break ;
	}
	print_newline();
	delete dog3;
	return (0);
}
