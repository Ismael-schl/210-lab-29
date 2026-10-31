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

//Function to simulate time periods occuring on the lake
    //Parameters would be the map and the number of time periods that occur

//Function to display the map's contents
    //The only parameter is the map
//Main function start
    //Initialize a map to read data from file data.txt. This map stores the name of the lake as key and an array of lists for each fish type.
    // Open data.txt to read my initial data
        //if file opening fails, print an error and exit
    //Read data from data.txt to populate the map
        //Iterate through every line to get lake name and affected species type (list number)
        //The species are then populated into their lakes proper list
    //Close file
    
    //Use the display function to print every lake's initial state cleanly
    //A for loop that goes through the map
        //In each lake, call the function to randomly apply various events to the lake for 28 time intervals. 
    //Finally, print every lake's final state.    
//End main