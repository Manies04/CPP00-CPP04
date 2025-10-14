#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
public:
	Contact(void);
	~Contact(void);

	void	SetFName(const std::string &str);
	void	SetLName(const std::string &str);
	void	SetNickname(const std::string &str);
	void	SetPhoneNumber();
	void	SetDS(const std::string &str);

	std::string	GetFName();
	std::string	GetLName();
	std::string	GetNickname();
	std::string	GetPhoneNumber();
	std::string	GetDS();

private:
std::string f_name;
std::string l_name;
std::string nickname;
std::string phone_number;
std::string darkest_secret;
};

#endif