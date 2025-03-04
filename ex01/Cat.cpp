/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:22:05 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 14:29:46 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain()){
	std::cout << YELLOW << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other){
	std::cout << YELLOW <<  "Cat copy constructor" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << YELLOW <<  "Cat assignation operator" << std::endl;
	if(this!=&other){
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat(){
	std::cout << YELLOW <<  "Cat destructor" << std::endl;
	delete _brain;
}

void Cat::makeSound() const{
	std::cout << YELLOW <<  "Meow" << std::endl;
}

Brain* Cat::getBrain() const{
	return _brain;
}