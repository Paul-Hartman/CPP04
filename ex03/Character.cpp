/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:45:32 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 17:53:08 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character() : _name("Character"){
	std::cout << "Character default constructor" << std::endl;
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name){
	std::cout << "Character name constructor" << std::endl;
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
	}
}

Character::Character(const Character &other) : _name(other._name){
	std::cout << "Character copy constructor" << std::endl;
	for (int i = 0; i < 4 && _inventory[i]; i++){
		delete _inventory[i];
		_inventory[i] = other._inventory[i]->clone();
	}
}

Character &Character::operator=(const Character &other){
	std::cout << "Character assignation operator" << std::endl;
	if(this != &other){
		_name = other._name;
		for (int i = 0; i < 4 && _inventory[i]; i++){
			delete _inventory[i];
			_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character(){
	std::cout << "Character destructor" << std::endl;
	for (int i = 0; i < 4; i++){
		delete _inventory[i];
	}
}

std::string const & Character::getName() const{
	return _name;
}

void Character::equip(AMateria	*m){
	for (int i = 0; i < 4; i++){
		if (!_inventory[i]){
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4){
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target){
	if(idx >=0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

