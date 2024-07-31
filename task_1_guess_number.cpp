#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(nullptr)));
    
    int random_number = rand() % 1000 + 1;
    int user_guess = 0;

    cout << "Guess a random number between 1 and 1000 :"<<endl;
 
    
    while (user_guess != random_number) {
        cout << "Enter your guess : ";
        cin >> user_guess;

        if (user_guess < random_number) {
            cout << "Your guess is too low ! Please try again."<<endl;
        } else if (user_guess > random_number) {
            cout << "Your guess is too high ! Please try again."<<endl;
        } else {
            cout << "Congratulations! You have guessed the correct number."<<endl;
        }
    }

    return 0;
}
