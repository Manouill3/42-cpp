	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:47:40 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/19 08:35:15 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main() {
    std::string entry;
    Phonebook phone;
    
    phone.set_oldest(0);
    while (1) {
        std::cout << "input > ";
        if (!std::getline(std::cin, entry))
            break;
        else if (entry == "EXIT")
            return(0);
        else if (entry == "ADD")
            phone.add_contact();
        else if (entry == "SEARCH") {
            if (!phone.search_contact())
                break;
        }
        else
            std::cout << "try : ADD, SEARCH or EXIT" << std::endl;
    }
}
