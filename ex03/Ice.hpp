/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:36:20 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 15:41:54 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(std::string const & type);
		Ice(const Ice &other);
		Ice &operator=(const Ice &other);
		~Ice();

		AMateria* clone() const;
		void use(ICharacter &target);
};