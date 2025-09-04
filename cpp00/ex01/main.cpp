/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:47:40 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/03 14:26:42 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main() {
    std::string entry;
    Phonebook phone;
    
    while (1) {
        std::cout << ">";
        std::cin >> entry;
        if (entry == "EXIT")
            return(0);
        // if (entry == "ADD"){
        //     Phonebook.ADD();
        // }
        // if (entry == "SEARCH"){
        //     Phonebook.SEARCH();
        // }    
    }
}
