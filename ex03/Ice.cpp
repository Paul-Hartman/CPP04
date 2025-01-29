/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:36:17 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 16:57:36 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria(type){
	std::cout << "Ice name constructor" << std::endl;
}

Ice::Ice(const Ice &other){
	std::cout << "Ice copy constructor" << std::endl;
	*this = other;
}

Ice &Ice::operator=(const Ice &other){
	std::cout << "Ice assignation operator" << std::endl;
	if(this != &other){
		type = other.type;
	}
	return *this;
}

Ice::~Ice(){
	std::cout << "Ice destructor" << std::endl;
}

AMateria* Ice::clone() const{
	std::cout << "Ice clone" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}