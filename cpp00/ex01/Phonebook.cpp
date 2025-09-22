/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:54:30 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/19 09:30:51 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void){}
Phonebook::~Phonebook(void){}

void    Phonebook::set_oldest(int old) {oldest = old;}
int Phonebook::get_oldest(void) {return oldest;}

void    Phonebook::add_contact(void) {
    std::string tmp;
    Contact new_contact;

    new_contact.new_contact();
    for (int i = 0; i < 8; i++) {
        tmp = book[i].get_first_name();
        if (tmp.empty()) {
            book[i] = new_contact;
            return;
        }
    }
    book[oldest] = new_contact;
    oldest++;
    if (oldest == 8)
        oldest = 0;
}

void    Phonebook::search_contact(void) {
    std::string index;
    
    print_header();
    for (int i = 0; i < 8; i++) {
        if (book[i].get_first_name().empty())
            break;
        book[i].print_contact(i);
    }
    std::cout << "Select a contact > ";
    if (!std::getline(std::cin, index))
            exit(1);
    if (book[0].get_first_name().empty()){
        std::cout << "No contact" << std::endl;
        return ;
    }
    print_all(book[atoi(index.c_str())]);
}

void    print_all(Contact contact) {
    std::cout << "First name : " << contact.get_first_name() << std::endl;
    std::cout << "Last name : " << contact.get_last_name() << std::endl;
    std::cout << "Nickname : " << contact.get_nickname() << std::endl;
    std::cout << "Number : " << contact.get_number() << std::endl;
    std::cout << "Darkest secret : " << contact.get_secret() << std::endl;
}

void    print_header(void) {
    std::cout << "|";
    std::cout << std::left << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::left << std::setw(10) << "First_name";
    std::cout << "|";
    std::cout << std::left << std::setw(10) << "Last_name";
    std::cout << "|";
    std::cout << std::left << std::setw(10) << "Nickname";
    std::cout << "|" << std::endl;
}
