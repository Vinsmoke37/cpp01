/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerraoui <aerraoui <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:04:55 by aerraoui          #+#    #+#             */
/*   Updated: 2023/05/27 14:18:32 by aerraoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>

void copyfile_in_file(std::ifstream *infile , std::ofstream *outfile ,char *S1, char *S2)
{
    std::string line;
    std::string STR1 = (std::string)S1;
    std::string STR2 = (std::string)S2;
    while( getline(*infile , line))
    {   
        size_t pos = 0;
        size_t found = line.find(S1,pos);
        while(found != std::string::npos)
        {
            line.erase(found,STR1.length());
            line.insert(found,S2);
            pos = found;
        found = line.find(S1,pos);

        }
        *outfile << line << std ::endl;
        
    }
}

int main(int ac , char **av)
{
    if(ac != 4)
        return(0);

    std::ifstream infile((std::string)av[1]);
    if(!infile)
    {
        std::cout << "errorr in infile"<< std::endl;
        return(0);
    }
    std::ofstream outfile((std::string)av[1]+ ".replace");
    if(!outfile)
    {
        std::cout << "error in outfile"<< std:: endl; 
        return(0);
    }

    copyfile_in_file(&infile ,&outfile,av[2],av[3]);
    
}