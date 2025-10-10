/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:09:12 by eieong            #+#    #+#             */
/*   Updated: 2025/10/10 13:36:55 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int	main()
// {
// 	Animal	*a = new Animal;
// 	Animal	*b = new Cat;

// 	a->makeSound();
// 	b->makeSound();

// 	return (0);
// }

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wronga = new WrongAnimal();
	const WrongAnimal* fakecat = new WrongCat();
	
	std::cout << std::endl;
	std::cout << meta->getType() << ": ";
	meta->makeSound();
	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	std::cout << wronga->getType() << ": ";
	wronga->makeSound();
	std::cout << fakecat->getType() << ": ";
	fakecat->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
	delete wronga;
	delete fakecat;

	return 0;
}
