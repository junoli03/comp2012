#include "Menu.h"

// Task 3.1
Menu::Menu(){
    currentSize = 0;
    nextFoodId = 1;
    capacity = 10;
    foodItems = new Food[capacity];
}

// Task 3.2
Menu::~Menu() {
    delete []foodItems;
}

// Task 3.3
void Menu::addFood(const Food& food) {
    if (!isFull()) {
        foodItems[currentSize++] = food;
        nextFoodId++;
    } else {
        resizeArray();
    }

}

// Task 3.4
bool Menu::removeFood(int id) {
    if (currentSize > 0) {
        int found = findFoodIndex(id);
        if (found != -1) {
            for (int i = found; i < currentSize - 1; i++) {
                foodItems[i] = foodItems[i+1];
            }
            nextFoodId = foodItems[found].getFoodId();
            currentSize--;
            return true;
        }
    }
    return false;
}

// Task 3.5
int Menu::findFoodIndex(int id) const {
    for (int i = 0; i < currentSize; i++) {
        if (foodItems[i].getFoodId() == id) {
            return i;
        }
    }
    return -1;
}

// Task 3.6
const Food* Menu::getFoodById(int id) const {
    for (int i = 0; i < currentSize; i++) {
        if (foodItems[i].getFoodId() == id) {
            return &foodItems[i];
        }
    }
    return nullptr;
}

// Task 3.7
void Menu::resizeArray() {
    Food* temp = new Food[capacity + 1];
    for (int i = 0; i < capacity;i++) {
        temp[i] = foodItems[i];
    }
    capacity++;
    delete []foodItems;
    foodItems = temp;
}

// ---------------------- provided functions: DO NOT MODIFY --------------------------
void Menu::displayMenu() const {
    if (currentSize == 0) {
        cout << "Menu is empty." << endl;
        return;
    }
    for (int i = 0; i < currentSize; i++) {
        cout << "ID: " << foodItems[i].getFoodId() << ", Name: " << foodItems[i].getFoodName() << ", Price: $" << foodItems[i].getPrice() << endl;
    }
}

void Menu::manageFoodItems() {
    int choice, id;

    do {
        // Display options
        cout << "\n** Manage Food Items **\n";
        cout << "1. Add food item\n";
        cout << "2. Update food price\n";
        cout << "3. Remove food item\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Current Menu items: "<< endl;
                displayMenu();
                if (isFull()) {
                    cout << "Menu is full. Cannot add more food items." << endl;
                    return;
                }
                    // Get user input for food details
                    string name;
                    float price; // Ensure this is float to match the constructor

                    cout << "Enter food name: ";
                    cin >> name;

                    cout << "Enter food price: ";
                    cin >> price;
                    Food newFood(nextFoodId, name, price); // Use nextFoodId here
                    addFood(newFood);
                    cout << "Food item added successfully." << endl;
                break;
            }
            case 2: {
                cout << "Current Menu items: "<< endl;
                displayMenu();
                cout << "Enter the ID of the food item to update: ";
                cin >> id;
                int index = findFoodIndex(id); // Scope introduced for index
                if (index == -1) {
                    cout << "Food item with ID " << id << " not found." << endl;
                    break;
                }
                double newPrice;
                cout << "Enter the new price: ";
                cin >> newPrice;
                foodItems[index].setPrice(newPrice);
                cout << "Price updated successfully." << endl;
                break;
            }
            case 3: {
                cout << "Current Menu items: "<< endl;
                displayMenu();
                cout << "Enter the ID of the food item to remove: ";
                cin >> id;
                if (removeFood(id)) {
                    cout << "Food item removed successfully." << endl;
                }
                break;
            }
            case 4: {
                cout << "Exiting food item management." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 4);
}