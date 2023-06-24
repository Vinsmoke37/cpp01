/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:20:16 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/26 11:28:48 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

class Zombie
{
    private:
    std::string name;
    public :
    Zombie();
    Zombie(std::string n);
    ~Zombie();
    void setname(std::string n);
    void announce(void);
};

Zombie* zombieHorde( int N, std::string name );