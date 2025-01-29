/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:17:36 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 14:31:20 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal"){
	std::cout << "Animal default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other){
	std::cout << "Animal copy constructor" << std::endl;
	*this = other;
}

AAnimal::AAnimal(std::string type) : type(type){
	std::cout << "Animal type constructor" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other){
	std::cout << "Animal assignation operator" << std::endl;
	if(this != &other){
		type = other.type;
	}
	return *this;
}

AAnimal::~AAnimal(){
	std::cout << "Animal destructor" << std::endl;
}

std::string AAnimal::getType() const{
	return type;
}

void AAnimal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}
