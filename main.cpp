#include <iostream>
#include <vector>
#include "RecipeBook.cpp"
#include "RecipeBook.h"

using namespace std;

int main(){
    RecipeBook rb;
    vector<RecipeBook> recipes;
    rb.addRecipe(recipes);

    rb.displayRecipes(recipes);
   //recipes.pop_back();

}