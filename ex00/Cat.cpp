/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:22:05 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 13:45:32 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << YELLOW <<  "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other){
	std::cout <<YELLOW <<  "Cat copy constructor" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other){
	std::cout <<YELLOW <<  "Cat assignation operator" << std::endl;
	if(this!=&other){
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat(){
	std::cout <<YELLOW <<  "Cat destructor" << std::endl;
}

void Cat::makeSound() const{
	std::cout <<YELLOW <<  "Meow" << std::endl;
}