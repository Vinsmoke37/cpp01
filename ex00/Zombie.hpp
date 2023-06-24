/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 06:26:15 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/26 09:41:25 by aerraoui         ###   ########.fr       */
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

void randomChump( std::string name);
Zombie* newZombie(std::string name);

    



