#ifndef RECIPEBOOK_H_INCLUDED
#define RECIPEBOOK_H_INCLUDED

#include <vector>
#include <string>
#include <array>
#include <iostream>
using namespace std;

class RecipeBook{

    public:

    void addRecipe(vector<RecipeBook> &recipes);
    void displayRecipes(vector<RecipeBook> &recipes);

    string name;
    vector<string> ingredients;
    int timeSpent;

};

#endif