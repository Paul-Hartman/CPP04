/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:09:06 by phartman          #+#    #+#             */
/*   Updated: 2025/02/27 17:50:32 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << RED << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &other){
	std::cout << RED << "Brain copy constructor" << std::endl;
	for (int i = 0; i < 100; i++){
		ideas[i] = other.ideas[i];
	}
}


Brain &Brain::operator=(const Brain &other){
	std::cout << RED << "Brain assignation operator" << std::endl;
	if(this == &other){
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain(){
	std::cout << RED << "Brain destructor" << std::endl;
}


