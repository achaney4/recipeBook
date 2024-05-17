#include "RecipeBook.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void RecipeBook::addRecipe(vector<RecipeBook> &recipes) {
    RecipeBook newRecipe;
    int n;
    string items;
    string words;

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

    cout << "Now enter simple instructions for this recipe (type '*' when finished)" << endl;
   
    while(cin >> words && words != "*"){
        newRecipe.instructions.push_back(words);
    }
    
    cout << "Lastly, enter how long this recipe will take to make (minutes)" << endl;
    cin >> newRecipe.timeSpent;
    recipes.push_back(newRecipe);
    cout << "Recipe added!" << endl;
    cout << endl;

}

void RecipeBook::deleteRecipe(vector<RecipeBook> &recipes){
    string nameToDelete;
    cout << "Enter the recipe name you'd like to delete!" << endl;
    cin >> nameToDelete;

    auto it = remove_if(recipes.begin(), recipes.end(), [&](const RecipeBook &recipes)
        { return recipes.name == nameToDelete;});

        if( it != recipes.end()){
            recipes.erase(it, recipes.end());
            cout << "Recipe deleted!" << endl;
        }
        else{
            cout << "Recipe not found." << endl;
        }

        cout << endl;
}

void RecipeBook::searchRecipe(vector<RecipeBook> &recipes){
    string searchName;
    cout << "Enter a recipe name to search: " << endl;
    cin >> searchName;

    bool found = false;

    for (const auto &recipe : recipes){
        
        if(recipe.name == searchName){
            cout << "**Recipe Name: " << recipe.name  << " **" << endl;

            cout << "Ingredients:" << endl;
            for(int i=0; i<recipe.ingredients.size(); i++){
                cout << i << ". " << recipe.ingredients[i] << endl;
            }

            cout << "Instructions: " << endl;
            for(int i=0; i<recipe.instructions.size(); i++){
                cout << recipe.instructions[i] << " ";
            }
            cout << endl;
            cout << "Time spent: " << recipe.timeSpent << " minutes" << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Recipe not found." << endl;
    }

    cout << endl;
}

void RecipeBook::displayRecipes(const vector<RecipeBook> &recipes){
   for (const auto &recipe : recipes){
        cout << "**Recipe Name: " << recipe.name  << " **" << endl;

        cout << "Ingredients:" << endl;
        for(int i=0; i<recipe.ingredients.size(); i++){
            cout << i << ". " << recipe.ingredients[i] << endl;
        }

        cout << "Instructions: " << endl;
         for(int i=0; i<recipe.instructions.size(); i++){
            cout << recipe.instructions[i] << " ";
        }
        cout << endl;
        cout << "Time spent: " << recipe.timeSpent << " minutes" << endl;
        cout << endl;
    
    }

}
