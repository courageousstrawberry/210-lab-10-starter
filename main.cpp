#include <iostream>
using namespace std;

int main() {

    // add any code here, sort of a 'hello world plus' code block
    string name;
    string trait;
    cout << "Hello World! Please enter the name of your world: ";
    cin >> name;

    cout << "Wow! " << name << " seems like it would be a cool place to live." << endl;
    cout << "Input one of " << name << "'s traits: ";
    cin >> trait;

    cout << "Name of world: " << name << endl;
    cout << "-------------" << endl;
    cout << "Trait: " << trait << endl;
    
    return 0;
}