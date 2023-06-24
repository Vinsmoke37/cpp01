/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:01:14 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/26 22:52:01 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    Zombie *Z;
    
    Z = zombieHorde(10,"vinsmoke");
    for (size_t i = 0; i < 10; i++)
    {
        Z[i].announce();
    }
    delete[] Z;
}