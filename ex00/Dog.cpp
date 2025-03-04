/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:22:43 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 13:46:07 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << BLUE << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &other){
	std::cout << BLUE << "Dog copy constructor" << std::endl;
	if(this!=&other){
		Animal::operator=(other);
	}
	*this = other;
}

Dog &Dog::operator=(const Dog &other){
	std::cout << BLUE << "Dog assignation operator" << std::endl;
	Animal::operator=(other);
	return *this;
}

Dog::~Dog(){
	std::cout << BLUE << "Dog destructor" << std::endl;
}

void Dog::makeSound() const{
	std::cout << BLUE << "Woof" << std::endl;
}