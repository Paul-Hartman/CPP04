/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:09:06 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 13:09:44 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &other){
	std::cout << "Brain copy constructor" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other){
	std::cout << "Brain assignation operator" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain destructor" << std::endl;
}


