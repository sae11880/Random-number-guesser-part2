#include <iostream>
#include <cstdlib> 
#include <ctime> 

int main() { // Seed the random number generator 
	std::srand(static_cast<unsigned int>(std::time(0)));
	int random_number = std::rand() % 1000000 + 1; // Random number between 1 and 1,000,000 
	int guess = 0; 
	int guess_count = 0; // Variable to count the number of guesses 


	std::cout << "I have a number from 1 to 1,000,000 in my head can you guess what it is?" << std::endl;

	while (true) { std::cout << "Enter your guess: "; 
	std::cin >> guess; guess_count++; // this keeps track of your guess count and allows for it to display at the end
	if (guess > random_number) { std::cout << "Your number is too high, try again. You have unlimited attempts!" << std::endl; } 
	else if (guess < random_number) { 
		std::cout << "Your number is too low, try again. You have unlimited attempts!" << std::endl; }
	else { 
		std::cout << "Congratulations! You got it right! The number was: " << random_number << std::endl;
		std::cout << "You guessed " << guess_count << " Times. Way to go!" << std::endl;
		break; 
	}
	} 
	return 0;
}
