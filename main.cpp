//Lab 29 | COMSC 210 | Ismael Hadi
//Necessary Includes
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <array>
#include <list>
#include <ctime>
#include <cstdlib>
using namespace std;

const int NUM_WEEKS = 28;

//Function to simulate time periods occuring on the lake
    //Parameters would be the map and the number of time periods that occur
void simulate(map<string, array<list<string>, 3>>& lakes, int numWeeks);

void displayLakes(const map<string, array<list<string>, 3>>& lakes);
//Function to display the map's contents
    //The only parameter is the map
//mockup version

//Main function start
int main() {
    srand(time(0));
    //Initialize a map to read data from file data.txt. This map stores the name of the lake as key and an array of lists for each fish type.
    map<string, array<list<string>, 3>> lakes;
    // Open data.txt to read my initial data
    ifstream fin("data.txt");
    if (!fin.is_open()) {
       cerr <<"Error opening file." << endl;
       return 1;
    }

    //Read data from data.txt to populate the map
        //Iterate through every line to get lake name and affected species type (list number)
        //The species are then populated into their lakes proper list
    //Close file
    //mockup display
    cout <<"Initial States: " << endl;
    displayLakes(lakes);

    //mockup simulation
    simulate(lakes, 3);

    cout << "Final States: " << endl;
    displayLakes(lakes);
    
    //Use the display function to print every lake's initial state cleanly
    //A for loop that goes through the map
        //In each lake, call the function to randomly apply various events to the lake for 28 time intervals. 
    //Finally, print every lake's final state.    
//End main
return 0;
}

void simulate(map<string, array<list<string>, 3>>& lakes, int numWeeks) {
    for (auto& entry : lakes) {
        for (int i = 0; i < numWeeks; i++) {
            int sel = rand() % 3 + 1;
            switch (sel) {
                case 1:
                cout << "Week " << i+1 << " :It's spawning season! Predator and prey populations increase." << endl;
                    break;
                case 2:
                    cout << "Week " << i+1 << " :Increased angler activity! A predator is removed from the list." << endl;
                    entry.second[0].pop_back();
                    break;
                case 3:
                    cout << "Week " << i+1 << " :An algal bloom occured. Bottom feeders thrive, while predators and prey partly die off." << endl;
                    
                    break;
            }
        }
    }
}

void displayLakes(const map<string, array<list<string>, 3>>& lakes) {
    for (auto& entry : lakes) {
        cout << entry.first << ": "
        << entry.second[0].size() << " predators, "
        << entry.second[1].size() << " prey, "
        << entry.second[2].size() << " bottom feeders " << endl;
    }
}