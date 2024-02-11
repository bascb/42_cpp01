/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:36:29 by bcastelo          #+#    #+#             */
/*   Updated: 2024/02/11 18:52:04 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie *array = zombieHorde(4, "clone");
	for (int i = 0; i < 4; i++)
		array[i].announce();
	delete [] array;
	return (0);
}