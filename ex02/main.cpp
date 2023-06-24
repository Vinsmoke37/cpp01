/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:23:43 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/26 12:40:35 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str;
    str =" HI THIS IS BRAIN ";
    
    std::string *strP;
    strP =&str;
    std ::string& strR = str;

    std::cout << &str << std:: endl;
    std:: cout << &strP << std:: endl;
    std:: cout << &strR<< std:: endl;

    std:: cout << str<< std::endl;
    std:: cout << *strP<<std::endl;
    std:: cout <<strR<<std:: endl;
    
}