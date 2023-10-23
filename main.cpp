#include "Country.h"

#include <iostream>

/*
General Plan for this:
    The game should play like this:
        1. Play enters how many guesses they'd like. 
        2. Randomly select a country
        3. On an incorrect guess, the game should display this information:
            **INCORRECT**
            -guess- is/isn't on the same continent!
            -guess- is -distance- miles away (based on either geographic center or capital, prob former)
            -guess- does/doesn't border the country
        4. Game ends when either the player guesses correctly or they run out of guesses.

    I'd like to institute some hard mode, though I'm not sure what that'd entail. Probably remove the border and continent reveal

    What I'll Need:
        Some file that I can read in this data:
            Name of country.
            Continent that country is on or, if it's an island (Oceania instead of Australia)
            Coordinates of country's center/capital
                (How to determine distance through coordinates? Is it just distance formula? Idk)
*/
int main() {
    std::cout << "Country Guessing Game\n";

    Country thePhilippines;

    thePhilippines.setName("The Philippines");
    thePhilippines.setLat(14.5958);
    thePhilippines.setLon(120.9772);
    thePhilippines.setContinent("Asia");

    std::string name = thePhilippines.getName();

    std::cout << thePhilippines.getName();


    return 0;
}