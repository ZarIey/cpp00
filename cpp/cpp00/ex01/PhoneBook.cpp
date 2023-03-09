/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:12:58 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/09 18:26:16 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "\033[32mConstructor called\033[37m" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "\033[32mDestructor called\033[37m" << std::endl;
	return ;
}

int Contact::add_function(int i)
{
	std::string catchh ;
	int error;
	while (i < 5) {
		if (i == 0) {
			type_text("\033[37mEntrez le prénom du contact : ", 0); // FIRST_NAME
			std::getline(std::cin,catchh);
     		if(std::cin.eof())
         		end_book(0);
			catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
			error = this->set_first_name(catchh);
			if (error < 0)
				continue ;
			i++;
		} 
		//
			if (i == 1) {
			type_text("Entrez le nom du contact : ", 0); // NAME
			std::getline(std::cin,catchh);
			if(std::cin.eof())
         		end_book(0);
			catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
			error = this->set_name(catchh);
			if (error < 0)
				continue ;
			i++;
		}
		//
		if (i == 2) {
			type_text("Entrez le surnom du contact : ", 0); // NICKNAME
			std::getline(std::cin,catchh);
			if(std::cin.eof())
         		end_book(0);
			catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
			error = this->set_nickname(catchh);
			if (error < 0)
				continue ;
			i++;
		}
		//
		if (i == 3) {
			type_text("Entrez le numero telephonique : ", 0); // NUMBER
			std::getline(std::cin,catchh);
			if(std::cin.eof())
         		end_book(0);
			catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
			error = this->set_number(catchh);
			if (error < 0)
				continue ;
			i++;
		}
	//
		if (i == 4) {
			type_text("Et pour finir son plus lourd secret : ", 0); // SECRET
			std::getline(std::cin,catchh);
			if(std::cin.eof())
         		end_book(0);
			error = this->set_secret(catchh);
			if (error < 0)
				continue ;
			i++;
		}
	}
	std::string contact = get_first_name();
	type_text(contact, 0);
	contact = get_name();
	type_text(" ", 0);
	type_text(contact, 0);
	type_text("\033[32m : enregistré !\033[37m", 1);
	return 0;
}

int main ()
{	
	PhoneBook allo;
	Contact Oui;
	int i = 0;
	std::string catchh;
	while (!std::cin.eof()) {
		type_text("\033[37mEntrez une commande : ", 0);
	//	loop_com();
		std::getline(std::cin, catchh);
		catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
		if(std::cin.eof())
         	end_book(0);
		if (catchh.empty()) {
			error_msg();
			continue ;
		}
		if (catchh == "ADD"){
			Oui.add_function(i);
			continue ;
		}
		else if (catchh == "SEARCH")
			type_text("Entrez le contact a recherchez : ", 0);
		else if (catchh == "EXIT")
			end_book(1);
		type_text("\033[31mLes commandes diponibles sont ADD, SEARCH ou EXIT", 1);
	}
}
