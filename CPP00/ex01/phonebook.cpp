#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook(void){
	index = 0;
	max_index = 0;
	std::cout << "PhoneBook Ready" << std::endl;
}
PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook Deleted" << std::endl;
}

void PhoneBook::AddContact(){

	std::string value;

	if (this->index == 8)
		this->index = 0;
	std::cout << "Insert First Name" << std::endl;
	std::cin >> value;
	this->contact[this->index].SetFName(value);

	std::cout << "Insert Last Name" << std::endl;
	std::cin >> value;
	this->contact[this->index].SetLName(value);

	std::cout << "Insert NickName" << std::endl;
	std::cin >> value;
	this->contact[this->index].SetNickname(value);

	std::cout << "Insert PhoneNumber" << std::endl;
	std::cin >> value;
	this->contact[this->index].SetPhoneNumber(value);

	std::cout << "Insert Darkest Secret" << std::endl;
	std::cin >> value;
	this->contact[this->index].SetDS(value);
	
	this->index++;
	if(this->max_index != 8)
		this->max_index++;
}

void PrintColumn(const std::string &text, int width = 10) {
	if((int)text.length() >= width)
		std::cout << std::setw(width) << text.substr(0, width - 1) + "." << " |";
	else
		std::cout << std::setw(width) << text << " |";
}

void PhoneBook::PrintList(int i){
	PrintColumn(this->contact[i].GetFName());
	PrintColumn(this->contact[i].GetLName());
	PrintColumn(this->contact[i].GetNickname());
}

void PhoneBook::PrintInfo(int i){
	std::cout << "First Name: " << this->contact[i].GetFName() << std::endl;
	std::cout << "Last Name: " << this->contact[i].GetLName() << std::endl;
	std::cout << "NickName: " << this->contact[i].GetNickname() << std::endl;
	std::cout << "Phone Number: " << this->contact[i].GetPhoneNumber() << std::endl;
	std::cout << "Dark Secret: " << this->contact[i].GetDS() << std::endl;
}

void PhoneBook::SearchContact(){

	int	display;//Number typed by the user

	std::cout << std::right << "| ";
	PrintColumn("Index");
	PrintColumn("First Name");
	PrintColumn("Last Name");
	PrintColumn("Nickname");
	std::cout << std::endl;
	for(int i = 0; i <= this->max_index - 1; i++){
		std::cout << std::right << "| "
		<< std::setw(10) << i << " |";
		PrintList(i);
		std::cout << std::endl;
	}
	std::cout << "What contact would you like to open?" << std::endl;
	std::cin >> display;
	//se inserir algo que nao int
	if(std::cin.fail() || display < 0){
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Unexpected Input, please try again!" << std::endl;
	}
	else{
		if(display >= index){
			std::cout << "Invalid Index, please try another one!" << std::endl;
			return ;
		}
		PrintInfo(display);
	}

}


void PhoneBook::ExitProgram(){
	exit(0);
}