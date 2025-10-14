#include <iostream>
#include "contact.hpp"

Contact::Contact(void){
}


Contact::~Contact(void){
}

void	Contact::SetFName(const std::string &str){
	this->f_name = str;
}

void	Contact::SetLName(const std::string &str){
	this->l_name = str;
}

void	Contact::SetNickname(const std::string &str){
	this->nickname = str;
}

void Contact::SetPhoneNumber() {

	std::string str;

	do {
		std::cout << "Insert Phone Number \n";
		std::cin >> str;

		bool valid = true;

		// Validate phone number: '+' only allowed as the first char, others must be digits
		for (size_t i = 0; i < str.length(); i++) {
			if (i == 0){
				if (!str.empty()&& str[0] == '+')
					continue; // '+' is allowed at the start

			}
			if (!isdigit(str[i])) {
				valid = false;
				break;
			}
		}

		if (valid && str != "+") {
			this->phone_number = str;
			break; // exit when valid
		} else {
			std::cout << "Invalid phone number!\n";
			std::cin.clear();				// reset error flags
			std::cin.ignore(10000, '\n');	// discard bad input
		}

	} while (!std::cin.eof());
}

void	Contact::SetDS(const std::string &str){
	this->darkest_secret = str;
}

std::string	Contact::GetFName(){
	return (this->f_name);
}

std::string	Contact::GetLName(){
	return(this->l_name);
}

std::string	Contact::GetNickname(){
	return(this->nickname);
}

std::string	Contact::GetPhoneNumber(){
	return(this->phone_number);
}

std::string	Contact::GetDS(){
	return(this->darkest_secret);
}