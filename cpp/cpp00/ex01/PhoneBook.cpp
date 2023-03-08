/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:12:58 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/08 19:09:01 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int error_msg(){
	std::cout << "La saisie ne peut être vide" << std::endl;
	return 1;
}


PhoneBook::PhoneBook()
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

// Contact::Contact(std::string name, std::string phone_number)
// {
// 	this->name = name;
//     this->number = phone_number;
// }

int check_type(std::string str)
{
	int a = str.compare("ADD");
	if (a == 0)
		return 0;
	a = str.compare("SEARCH");
	if (a == 0)
		return 1;
	a = str.compare("EXIT");
	if (a == 0)
		return 2;
	return -1;
}

int Contact::add_function()
{
	std::string catchh ;
	std::cout << "Entrez le prénom du contact : ";
	std::getline(std::cin,catchh);
	catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
	if (catchh.empty())
		return error_msg();
	this->set_first_name(catchh);
	std::cout << this->get_first_name() << std::endl;
	//
	std::cout << "Entrez le nom du contact : ";
	std::getline(std::cin,catchh);
	catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
	if (catchh.empty())
		return error_msg();
	this->set_name(catchh);
	std::cout << this->get_name() << std::endl;
	//
	std::cout << "Entrez le surnom du contact : ";
	std::getline(std::cin,catchh);
	catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
	if (catchh.empty())
		return error_msg();
	this->set_nickname(catchh);
	std::cout << this->get_nickname() << std::endl;
	//
	std::cout << "Entrez le numero telephonique : ";
	std::getline(std::cin,catchh);
	catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
	if (catchh.empty())
		return error_msg();
	this->set_number(catchh);
	std::cout << this->get_number() << std::endl;
	//
	std::cout << "Et pour finir son plus lourd secret : ";
	std::getline(std::cin,catchh);
	//catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
	if (catchh.empty())
		return error_msg();
	this->set_secret(catchh);
	std::cout << this->get_secret() << std::endl;
	//
	return 0;
}

int main ()
{	
	PhoneBook allo;
	Contact Oui;
	std::string catchh;
	std::cout << "Entrez une commande : ";
	std::getline(std::cin, catchh);
	catchh.erase(remove_if(catchh.begin(), catchh.end(), isspace), catchh.end());
	if (catchh.empty())
		return error_msg();
	if (check_type(catchh) == 0){
		Oui.add_function();
	}
	if (check_type(catchh) == 1)
		std::cout << "Entrez le contact a recherchez : " << std::endl;
//	}
	if (check_type(catchh) == 2)
	{
		std::cout << "ON SE CASSE : " << std::endl;
		return 0;
	}
	std::cout << "Veuillez rentrer ADD, SEARCH ou EXIT" << std::endl;
	//Contact Test("Jean", "0101010101");
	// std::cout << " et valeur de test->number " << Test.get_number() << std::endl;
}
