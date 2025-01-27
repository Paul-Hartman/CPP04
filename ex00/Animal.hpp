#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal();
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		~Animal();

		std::string getType() const;

		virtual void printType() const;
		virtual void makeSound();
		virtual void printSound() const;

	protected:
		virtual void makeSound() const = 0;

	private:
		std::string type;
};

#endif