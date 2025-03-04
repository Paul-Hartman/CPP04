/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:27:15 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 15:34:11 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"



void unequipTest()
{
	std::cout << "=======Unequip test=========" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	
	AMateria* tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	
	AMateria* tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->use(0, *me);
	
	delete tmp1;
	delete tmp2;
	delete me;
	delete src;
	std::cout << "=======Unequip test END=========" << std::endl;
}

void subjectTest()
{
	std::cout << "=======Subject test=========" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	std::cout << "=======Subject test END=========" << std::endl;
}

int main()
{
	subjectTest();
	unequipTest();
	
	return 0;
}
