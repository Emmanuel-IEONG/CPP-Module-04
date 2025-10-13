/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:09:12 by eieong            #+#    #+#             */
/*   Updated: 2025/10/13 13:38:45 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main()
{
	/* TAB TESTS*/
	int	tab_size = 5;
	const Animal*	animal[tab_size * 2];
	for (int i = 0; i < (tab_size * 2); i++)
	{
		if (i < tab_size)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}	
	std::cout << std::endl;
	
	for (int i = 0; i < (tab_size * 2); i++)
	{
		std::cout << animal[i]->getType() << ": ";
		animal[i]->makeSound();
	}
	std::cout << std::endl;
	
	for (int i = 0; i < (tab_size * 2); i++)
		delete animal[i];
	std::cout << std::endl;

	/* COPY TESTS*/
	const Dog* dog = new Dog();

	std::cout << "Setting new idea" << std::endl;
	dog->getBrain()->setIdea("New idea", 5);

	Dog dog2(*dog);
	
	delete dog;
	std::cout << std::endl;
	for (int i = -1; i < 10; i++)
		std::cout << "Copy dog idea: " << dog2.getBrain()->getIdea(i) << std::endl;
	std::cout << "..." << std::endl;

	// delete cat;
	
	return (0);
}

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* dog = new Dog();
// 	const Animal* cat = new Cat();
	
// 	std::cout << std::endl;
// 	std::cout << meta->getType() << ": ";
// 	meta->makeSound();
// 	std::cout << dog->getType() << ": ";
// 	dog->makeSound();
// 	std::cout << cat->getType() << ": ";
// 	cat->makeSound();
// 	std::cout << std::endl;
// 	delete meta;
// 	delete dog;
// 	delete cat;	

// 	return 0;
// }
