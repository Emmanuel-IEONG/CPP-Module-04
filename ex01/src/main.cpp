/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:09:12 by eieong            #+#    #+#             */
/*   Updated: 2025/10/22 12:11:24 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"

void	print_newline()
{
	std::cout << std::endl;
}

int	main()
{
	std::cout << GREEN "/*~~~~~~~~~~~~~~~TAB TESTS~~~~~~~~~~~~~~~*/" RESET << std::endl;
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

	std::cout << GREEN "/*~~~~~~~~~~~~~~~COPY TESTS~~~~~~~~~~~~~~~*/" RESET << std::endl;
	const Dog*	dog = new Dog();
	print_newline();
	std::cout << "~Setting new idea in dog~" << std::endl;
	dog->getBrain()->setIdea("New idea", 5);
	print_newline();
	Dog*	dog2 = new Dog(*dog);
	print_newline();
	Dog		dog3(*dog);
	print_newline();
	Dog		dog4;
	dog4 = *dog;
	print_newline();
	delete dog;
	print_newline();
	std::cout << "~Setting new idea in dog3~" << std::endl;
	dog3.getBrain()->setIdea("BARK BARK", 4);
	print_newline();
	for (int i = 0; i < 10; i++)
	{
		if (!(*dog2).getBrain()->getIdea(i).empty())
			std::cout << "Copy dog2 idea: " << (*dog2).getBrain()->getIdea(i) << std::endl;
		else
			break ;
	}
	print_newline();
	delete dog2;
	print_newline();
	for (int i = 0; i < 10; i++)
	{
		if (!dog3.getBrain()->getIdea(i).empty())
			std::cout << "Copy dog3 idea: " << dog3.getBrain()->getIdea(i) << std::endl;
		else
			break ;
	}
	print_newline();
	for (int i = 0; i < 10; i++)
	{
		if (!dog4.getBrain()->getIdea(i).empty())
			std::cout << "Copy dog4 idea: " << dog4.getBrain()->getIdea(i) << std::endl;
		else
			break ;
	}

	return (0);
}
