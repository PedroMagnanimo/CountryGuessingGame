#include "Country.h"

//getters
std::string Country::getName() {return name;}
double Country::getLat() {return lat;}
double Country::getLon() {return lon;}
std::string* Country::getNeighbors() {return neighbors;}
std::string Country::getContinent() {return continent;}
int Country::getNumNeighbors() {return numNeighbors;}

//setters
void Country::setName(std::string n) {name = n;}
void Country::setLat(double l) {lat = l;}
void Country::setLon(double l) {lon = l;}
void Country::setContinent(std::string n) {continent = n;}
void Country::setNeighbors(int num) {
    numNeighbors = num;
    
    //I'll figure this out. Might need to do an array of countries.
}
