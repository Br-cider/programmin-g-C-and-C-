#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to generate a random password
string generatePassword(int length) {
    string password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";

    // Seed the random number generator
    srand(time(0));

    // Generate the password
    for (int i = 0; i < length; i++) {
    	cout<<"The length of the character is : "<<characters.length()<<"\n";
    	int random = rand();
    	cout<<"The generated random number is : "<<random<<"\n";
        int index = random % characters.length();
        cout<<"The index found is : "<<index<<"\n";
        cout<<characters[index]<<"\n";
        password += characters[index];
    }

    return password;
}

int main() {
    int len;
    cout << "Enter the length of the password: ";
    cin >> len;

    string password = generatePassword(len);
    cout << "Generated Password: " << password << endl;

    return 0;
}
