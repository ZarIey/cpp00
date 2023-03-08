#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	private:
	std::string name;
	std::string number;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

	public:
	int add_function();
	std::string get_first_name();
	std::string get_name();
	std::string get_number();
	std::string get_nickname();
	std::string get_secret();
	void set_first_name(std::string);
	void set_name(std::string);
	void set_number(std::string);
	void set_nickname(std::string);
	void set_secret(std::string);
};

#endif