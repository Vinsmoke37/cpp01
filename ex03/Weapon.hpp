/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:58:10 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/27 05:33:27 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include<string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string a);
        ~Weapon();
        std:: string& getType();
        void setType(std::string str);
};
#endif