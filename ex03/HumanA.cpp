/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:35:31 by bcastelo          #+#    #+#             */
/*   Updated: 2024/02/13 21:55:48 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA( void )
{
	std::cout << "Human A " << name << " was destroyed" << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}