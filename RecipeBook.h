#ifndef RECIPEBOOK_H_INCLUDED
#define RECIPEBOOK_H_INCLUDED

#include <vector>
#include <string>
#include <array>
#include <iostream>
using namespace std;

class RecipeBook{

    public:

    void addRecipe(vector<RecipeBook> &book);
    void displayRecipes(const vector<RecipeBook> &book);

    string name;
    vector<string> ingredients;
    vector<string> instructions;
    int timeSpent;

};

#endif