/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:13:18 by eieong            #+#    #+#             */
/*   Updated: 2025/10/14 16:35:51 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

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
	delete ice1;
	delete ice2;
	delete cure1;
	delete cure2;
	delete player;
	delete target;

	return (0);
}
