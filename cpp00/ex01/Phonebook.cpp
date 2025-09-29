/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:54:30 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/29 14:37:10 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void){}
Phonebook::~Phonebook(void){}

void    Phonebook::set_oldest(int old) {oldest = old;}
int Phonebook::get_oldest(void) {return oldest;}

int Phonebook::get_booksize(Contact book[]) {
    std::string tmp;
    
    for (int i = 0; i < 8; i++) {
        tmp = book[i].get_first_name();
        if (tmp.empty()) {
            return (i);
        }
    }
    return -1;
}

void    Phonebook::add_contact(void) {
    int i;
    Contact new_contact;

    new_contact.new_contact();
    i = get_booksize(book);
    if (i != -1) {
        book[i] = new_contact;
        return ;
    }
    book[oldest] = new_contact;
    oldest++;
    if (oldest == 8)
        oldest = 0;
}

bool    Phonebook::search_contact(void) {
    int size;
    std::string index;
    
    print_header();
    for (int i = 0; i < 8; i++) {
        if (book[i].get_first_name().empty())
            break;
        book[i].print_contact(i);
    }
    std::cout << "Select a contact > ";
    if (!std::getline(std::cin, index))
            return false;
    if (book[0].get_first_name().empty()){
        std::cout << "No contact" << std::endl;
        return true;
    }
    size = get_booksize(book);
    if (look_for_char(index))
        std::cout << "No contact" << std::endl;
    else if ((size >= 0 && size <= atoi(index.c_str())) || atoi(index.c_str()) < 0 || (size < 0 && atoi(index.c_str()) > 7))
        std::cout << "No contact" << std::endl;
    else
        print_all(book[atoi(index.c_str())]);
    return true;
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
    std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First_name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Last_name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nickname";
    std::cout << "|" << std::endl;
}

int look_for_char(std::string index) {
    for(size_t i = 0; i < index.length(); i++) {
        if (isalpha(index[i]))
            return 1;
    }
    return 0;
}
