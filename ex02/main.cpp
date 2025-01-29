/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:09:12 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 14:44:05 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	j->makeSound();
	i->makeSound();
	delete j;
	delete i;
	return 0;
}
