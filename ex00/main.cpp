/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:36:29 by bcastelo          #+#    #+#             */
/*   Updated: 2024/02/11 17:19:45 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	first("Main stack");
	first.announce();
	Zombie *newZ = newZombie("newZombie heap");
	newZ->announce();
	randomChump("randomChump stack");
	delete newZ;
	return (0);
}