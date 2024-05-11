/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:46:20 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/11 14:24:03 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB( void )
{
	std::cout << "Human B " << name << " was destroyed" << std::endl;
}

void	HumanB::attack( void )
{
	if (weapon != NULL)
	{
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << name << " has no weapon to attack!" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}