/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:22:05 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 15:02:40 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") , _brain(new Brain()){
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other){
	std::cout << "Cat copy constructor" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat assignation operator" << std::endl;
	if(this!=&other){
		AAnimal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
	delete _brain;
}

void Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain() const{
	return _brain;
}