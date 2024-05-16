#include "RecipeBook.h"
#include <iostream>
using namespace std;

void RecipeBook::addRecipe(vector<RecipeBook> &recipes) {
    RecipeBook newRecipe;
    int n;
    string items;

    cout << "Enter the name of the recipe you'd like to add" << endl;
    cin >> newRecipe.name;
    cout << "Next, how many ingredients would you like to add to this recipe?" << endl;
    cin >> n;
    cout << "Please list the " << n << " ingredients now" << endl;
    // loop to add items to ingredients vector
    for(int i=0; i<n; i++){
        cin >> items;
        newRecipe.ingredients.push_back(items);
    }
    cout << "Lastly, enter how long this recipe will take to make (minutes)" << endl;
    cin >> newRecipe.timeSpent;
    recipes.push_back(newRecipe);
    cout << "Recipe added!" << endl;



}

void RecipeBook::displayRecipes(vector<RecipeBook> &recipes){
    for(const auto &recipe : recipes){
        cout << "Name: " << recipe.name << endl;
        cout << "Ingredients:" << endl;
        for(int i=0; i<recipe.ingredients.size(); i++){
            cout << i << ". " << recipe.ingredients[i] << endl;
        }
        cout << "Time spent:" << recipe.timeSpent<< " minutes" << endl;
    }
}
