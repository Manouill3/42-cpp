/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:18:10 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/15 09:26:53 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string file_to_text(std::ifstream &infile) {
    std::string line;
    std::string text;
    
    while (std::getline(infile, line)) {
        text += line;
        text += '\n'; 
    }
    return text;
}

std::string change_text(std::string text, std::string supp, std::string add) {
    size_t pos;
    int lenght_supp;

    if (supp.empty())
        return "";
    lenght_supp = supp.size();
    pos = text.find(supp);
    while (pos != std::string::npos) {
        text.erase(pos, lenght_supp);
        text.insert(pos, add);
        pos += add.size();
        pos = text.find(supp, pos);
    }
    return text;
}

int main(int ac, char **av) {
    if (ac != 4) {
        std::cout << "Wrong format -> {Filename} {Suppressed} {added}" << std ::endl;
        return 1;
    }
    
    std::string text;
    std::string outfile_name;
    
    if (std::string(av[2]).size() < 1) {
        std::cout << "You can't replace nothing" << std::endl;
        return 1;
    }
    outfile_name += std::string(av[1]);
    outfile_name += ".replace";
    std::ifstream infile(av[1]);
    if (!infile) {
        std::cout << "Infile doesn't exist" << std::endl;
        return 1;
    }
    std::ofstream outfile(outfile_name.c_str());    
    if (!outfile) {
        std::cout << "Outfile creation failed" << std::endl;
        return 1;
    }
    text = file_to_text(infile);
    text = change_text(text, std::string(av[2]), std::string(av[3]));
    if (text.empty())
        return 1;
    outfile << text;
}
