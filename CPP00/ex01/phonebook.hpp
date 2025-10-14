#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	void AddContact(void);
	void SearchContact(void);
	void PrintList(int i);
	void PrintInfo(int i);
	bool Printable(const std::string &text);

private:
	int index;
	int max_index;
	Contact contact[8];
};

#endif