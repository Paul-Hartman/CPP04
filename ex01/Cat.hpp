/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:02:19 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 14:04:02 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	public: 
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();
		
		void makeSound() const;
		
		Brain* getBrain() const;
		
	private:
		Brain* _brain;
};
