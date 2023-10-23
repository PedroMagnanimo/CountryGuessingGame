#ifndef COUNTRY_H
#define COUNTRY_H

#include <fstream>
#include <string>
#include <cmath>

class Country {
    private:
        std::string name; //Name of country
        double lat; //Latitude of the country
        double lon; //longtitude of the country
        int numNeighbors; //Number of neighbors
        std::string* neighbors; //list of neighbors
        std::string continent; //name of continent

    public:
        //getters
        std::string getName();
        double getLat();
        double getLon();
        int getNumNeighbors();
        std::string* getNeighbors();
        std::string getContinent();

        //setters
        void setName(std::string);
        void setLat(double);
        void setLon(double);
        void setNeighbors(int); //will set neighbors & number of neighbors
        void setContinent(std::string);
        
};

#endif