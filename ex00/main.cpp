/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:09:12 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 12:55:17 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongCat* cat = new WrongCat();
	const WrongAnimal* wrong = new WrongCat();
	const WrongAnimal* wrong2 = new WrongAnimal();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();
	wrong->makeSound();
	wrong2->makeSound();
	cat->makeSound();
	delete meta;
	delete j;
	delete i;
	delete cat;
	delete wrong;
	delete wrong2;
	return 0;
}
