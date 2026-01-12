/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:01:51 by jromann           #+#    #+#             */
/*   Updated: 2026/01/12 16:56:04 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
    if(argc != 4)
        return 1;
    if (argv[2] == NULL || argv[3] == NULL)
        return 1;
    std::ifstream file(argv[1]);
    if (!file){
        std::cerr << "File could not be opened !" << std::endl;
        return 1;
    }
    std::ofstream replace_file((std::string(argv[1]) + ".replace").c_str());
    if (!replace_file){
        std::cerr << "Replace file could not be opened !" << std::endl;
        return 1;
    }
    std::string line;
    size_t pos;
    std::string search_str = argv[2];
    std::string replace_str = argv[3];
    while (std::getline(file, line)) {
        pos = 0;
        while(pos != std::string::npos && pos < line.size()){
            pos = line.find(search_str, pos);
            if(pos != std::string::npos && pos < line.size()){
                line.erase(pos, search_str.size());
                line.insert(pos, replace_str);
                pos += std::string(replace_str).size();
            }
            
        }
        replace_file << line << std::endl;
    }
    return 0;
}