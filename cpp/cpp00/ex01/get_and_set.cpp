/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_and_set.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:39:48 by ctardy            #+#    #+#             */
/*   Updated: 2023/03/08 19:05:52 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// get_functions ------------------------------------

std::string Contact::get_first_name()
{
	return this->first_name;
}

std::string Contact::get_name()
{
	return this->name;
}

std::string Contact::get_nickname()
{
	return this->nickname;
}

std::string Contact::get_number()
{
	return this->number;
}

std::string Contact::get_secret()
{
	return this->secret;
}

// set_functions ------------------------------------


void Contact::set_first_name(std::string name)
{
	this->first_name = name;
	return; 
}

void Contact::set_name(std::string name)
{
	this->name = name;
	return; 
}

void Contact::set_nickname(std::string name)
{
	this->nickname = name;
	return; 
}

void Contact::set_number(std::string name)
{
	this->number = name;
	return; 
}

void Contact::set_secret(std::string name)
{
	this->secret = name;
	return; 
}