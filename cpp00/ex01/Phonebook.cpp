/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:54:30 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/16 12:59:02 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void){}
Phonebook::~Phonebook(void){}

void    Phonebook::add_contact(void) {
    int i;
    std::string test;
    Contact new_contact;

    i = 0;
    new_contact.new_contact();
    while (i < 9) {
        test = book[i].get_first_name();
        if (test.empty()) {
            book[i] = new_contact;
            break;
        }
        if (i == 8)
            book[0] = new_contact;
        i++;
    }
}

// void    Phonebook::SEARCH() {
    
// }
