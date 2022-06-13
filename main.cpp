#include <iostream>


std::string generateKey(std::string str, std::string key)

{
	int z = str.size() - key.size();

	for (int i = 0; i < z; i++)
	{
		key.push_back(key[i]);
	}
	return key;	
}
std:: string cipherText(std::string str, std::string key)
{
	std::string cipher_text;

	for (int i = 0; i < str.size(); i++)
	{
		// converting in range 0-25
		char x = (str[i] + key[i]) % 26;

		// convert into alphabets(ASCII)
		x += 'A';

		cipher_text.push_back(x);
	}
	return cipher_text;
}




int main()
{

	std::string message; 
	std::string keyWord;

	std::cout << "Enter message: ";
	std::cin >> message;
	std::cout << "Enter keyWord ";
	std::cin >> keyWord;

	std:: string key = generateKey(message, keyWord);
	std::string cipher_text = cipherText(message, key);

	std:: cout << "Ciphertext : "
		<< cipher_text << "\n";


}