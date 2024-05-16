#include <iostream>
#include <vector>
#include "RecipeBook.cpp"
#include "RecipeBook.h"

using namespace std;

int main(){
    RecipeBook rb;
    vector<RecipeBook> recipes;
    int choice;

    do{
        cout << "Please enter your choice!" << endl;
        cout << "1. Add Recipe" << endl;
        cout << "2. Display Recipe Book" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch(choice){
            case 1: rb.addRecipe(recipes);
                break;
            case 2: 
                rb.displayRecipes(recipes);
                break;
            case 3:
                end;
            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 3);

    
    

    //recipes.clear();



return 0;
}