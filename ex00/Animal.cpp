/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:17:36 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 13:47:07 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
	std::cout << GREEN << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &other){
	std::cout << GREEN << "Animal copy constructor" << std::endl;
	*this = other;
}

Animal::Animal(std::string type) : type(type){
	std::cout << GREEN << "Animal type constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
	std::cout << GREEN << "Animal assignation operator" << std::endl;
	if(this != &other){
		type = other.type;
	}
	return *this;
}

Animal::~Animal(){
	std::cout << GREEN << "Animal destructor" << std::endl;
}

std::string Animal::getType() const{
	return type;
}

void Animal::makeSound() const{
	std::cout << GREEN << "Animal sound" << std::endl;
}
