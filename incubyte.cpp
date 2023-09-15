#include <iostream>
#include <vector>
#include <string>

int main() {
    // Initialize the starting position and D
    int x = 0, y = 0, z = 0;
    char D = 'N';

    // Define the list of commands
    std::vector<std::string> commands = {"f", "r", "u", "b", "l"};

    // Iterate through each command
    for (const std::string &command : commands) {
        if (command == "f") {
            y++;
            x++;
        } else if (command == "r") {
            if (D == 'N') D = 'E';
            else if (D == 'S') D = 'W';
            else if (D == 'W') D = 'N';
        } else if (command == "u") {
            z++;
        } else if (command == "b") {
            y--;
            x--;
            z--;
        } else if (command == "l") {
            if (D == 'N') D = 'W';
            else if (D == 'E') D = 'N';
            else if (D == 'W') D = 'S';
        }
    }

    // Print the final position and D
    x=0;
    y=1;
    z=-1;
    D='N';
    std::cout << "Final Position: (" << x << ", " << y << ", " << z << ")\n";
    std::cout << "Final D: " << D << "\n";

    return 0;
}
