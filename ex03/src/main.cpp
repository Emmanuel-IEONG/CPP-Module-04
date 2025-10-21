/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:13:18 by eieong            #+#    #+#             */
/*   Updated: 2025/10/21 16:53:21 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/colors.hpp"

int main_subject()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	std::cout << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}


int	main()
{
	// std::cout << GREEN "/*~~~~~~~~~~~~~~~SUBJECT MAIN~~~~~~~~~~~~~~~*/" RESET << std::endl;
	// main_subject();
	std::cout << GREEN "/*~~~~~~~~~~~~~~~OTHER TESTS~~~~~~~~~~~~~~~*/" RESET << std::endl;
	IMateriaSource*	src = new MateriaSource();
	AMateria*	ice1 = new Ice();
	AMateria*	cure1 = new Cure();
	AMateria*	test_full = new Ice();
	src->learnMateria(ice1);
	src->learnMateria(cure1);
	AMateria*	ice2 = src->createMateria("ice");
	AMateria*	cure2 = src->createMateria("cure");
	src->learnMateria(ice2);
	src->learnMateria(cure2);
	src->learnMateria(test_full);
	std::cout << std::endl;
	ICharacter*	player = new Character("Player");
	ICharacter*	target = new Character("someone");
	std::cout << std::endl;
	player->use(2, *target);
	std::cout << std::endl;
	player->equip(ice1);	//[0]
	player->equip(cure1);	//[1]
	player->equip(ice2);	//[2]
	player->equip(cure2);	//[3]
	player->equip(test_full);
	std::cout << std::endl;
	player->unequip(4);
	player->use(4, *target);
	std::cout << std::endl;
	player->use(2, *target);
	player->unequip(2);
	player->use(2, *target);
	std::cout << std::endl;
	player->use(3, *target);
	player->unequip(3);
	std::cout << std::endl;
	delete player;
	delete target;
	delete ice2;	//unequiped
	delete cure2;	//unequiped
	delete test_full;
	delete src;

	return (0);
}
