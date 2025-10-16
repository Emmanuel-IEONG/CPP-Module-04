/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:09:12 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 16:40:37 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* notanimal = new WrongAnimal();
	const WrongAnimal* notcat = new WrongCat();
	const WrongCat*	wrongcat = new WrongCat();
	
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
	std::cout << wrongcat->getType() << ": ";
	wrongcat->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
	delete notanimal;
	delete notcat;
	delete wrongcat;
	return 0;
}
