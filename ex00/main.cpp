/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:09:12 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 11:01:35 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* notanimal = new WrongAnimal();
	const WrongAnimal* notcat = new WrongCat();
	
	std::cout << std::endl;
	std::cout << meta->getType() << ": ";
	meta->makeSound();
	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	std::cout << notanimal->getType() << ": ";
	notanimal->makeSound();
	std::cout << notcat->getType() << ": ";
	notcat->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
	delete notanimal;
	delete notcat;

	return 0;
}
