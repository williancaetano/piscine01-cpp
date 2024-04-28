#include <fstream>
#include <iostream>
#include <string>

void replace(std::string &str, const char *search, const char *replace);

int main(int argc, char **argv)
{
	std::string line;
	std::string new_file;
	std::ifstream input_file;
	std::ofstream output_file;

	if (argc != 4)
	{
		std::cout << "Please provide: <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	new_file = argv[1];
	input_file.open(argv[1]);
	if (!input_file)
	{
		std::cout << "Error opening the file" << std::endl;
		return 1;
	}
	if (input_file.eof())
	{
		std::cout << "File is empty." << std::endl;
	}
	new_file += ".replace";
	output_file.open(new_file.c_str());
	while (!input_file.eof())
	{
		getline(input_file, line);
		replace(line, argv[2], argv[3]);
		output_file << line << std::endl;
	}
	input_file.close();
	output_file.close();
	return (0);
}

void replace(std::string &str, const char *search, const char *replace)
{
	std::size_t find_index;
	std::size_t search_len;

	find_index = str.find(search);
	search_len = strlen(search);
	while (find_index != str.npos)
	{
		str.erase(find_index, search_len);
		str.insert(find_index, replace);
		find_index = str.find(search, find_index);
	}
	return;
}