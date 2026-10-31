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
//mockup version:
void simulate(map<string, array<list<string>, 3>>& lakes, int numWeeks) {
    cout << "simulate received " << lakes.size() << " lakes for " <<numWeeks << " week(s)" << endl;
    lakes.begin()->second[1].push_back("Bluegill");
}
//Function to display the map's contents
    //The only parameter is the map
//mockup version
void displayLakes(const map<string, array<list<string>, 3>>& lakes) {
    for (auto& entry : lakes) {
        cout << entry.first << ": "
        << entry.second[0].size() << " predators, "
        << entry.second[1].size() << " prey, "
        << entry.second[2].size() << " bottom feeders " << endl;
    }
}
//Main function start
int main() {
    srand(time(0));
    //Initialize a map to read data from file data.txt. This map stores the name of the lake as key and an array of lists for each fish type.
    map<string, array<list<string>, 3>> lakes;
    //mockup version, no file input
    lakes["Test Lake"][0].push_back("Bass");
    lakes["Test Lake"][1].push_back("Minnow");
    lakes["Test Lake"][2] .push_back("Catfish");
    // Open data.txt to read my initial data
        //if file opening fails, print an error and exit
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