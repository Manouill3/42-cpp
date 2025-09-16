/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:47:40 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/16 12:57:33 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main() {
    std::string entry;
    Phonebook phone;
    
    while (1) {
        std::cout << "input > ";
        std::cin >> entry;
        if (entry == "EXIT")
            return(0);
        if (entry == "ADD"){
            phone.add_contact();
        }
        // if (entry == "SEARCH"){
        //     Phonebook.SEARCH();
        // }    
    }
}
