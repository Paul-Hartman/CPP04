/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:09:12 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 16:22:07 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	Dog* d = new Dog();
	Dog* d2 = new Dog(*d);
	d2->makeSound();
	j->makeSound();
	i->makeSound();
	delete j;
	delete i;
	return 0;
}
