/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:39:52 by bcastelo          #+#    #+#             */
/*   Updated: 2024/02/11 19:00:00 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie* array = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		array[i].setName(name);
	} 
	return (array);
}