/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:13:18 by eieong            #+#    #+#             */
/*   Updated: 2025/10/16 15:02:58 by eieong           ###   ########.fr       */
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

int	main()
{
	AMateria*	ice1 = new Ice();
	AMateria*	ice2 = new Ice();
	AMateria*	cure1 = new Cure();
	AMateria*	cure2 = new Cure();
	std::cout << std::endl;
	ICharacter*	player = new Character("Sephiroth");
	ICharacter*	target = new Character("someone");
	std::cout << std::endl;
	player->equip(ice1);
	player->equip(cure1);
	player->equip(cure2);
	player->equip(ice2);
	player->equip(ice1);
	std::cout << std::endl;
	player->unequip(4);
	player->use(4, *target);
	std::cout << std::endl;
	player->use(2, *target);
	player->unequip(2);
	std::cout << std::endl;
	delete player;
	delete target;
	delete cure2;

	return (0);
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	std::cout << std::endl;
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	std::cout << std::endl;
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	std::cout << std::endl;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	std::cout << std::endl;
// 	ICharacter* bob = new Character("bob");
// 	std::cout << std::endl;
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	std::cout << std::endl;
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }
