//
// Created by andre on 11-06-2023.
//

#ifndef CINEMAAPPLICATION_MOVIECONTAINER_H
#define CINEMAAPPLICATION_MOVIECONTAINER_H


#include <list>
#include "Movie.h"
#include <string>

class MovieContainer
{
private:
    list<Movie> movies;
    list<Movie>::iterator search(const string& title);

public:
    list<Movie> getAll();
    Movie* get(const string& title);
    Movie* getOrder(int index);
    void add(const Movie& obj);
    void remove(const string& title);
    void update(const string& title, const string& description, const string& genre, int duration, int minimalAge);
};

#endif //CINEMAAPPLICATION_MOVIECONTAINER_H
