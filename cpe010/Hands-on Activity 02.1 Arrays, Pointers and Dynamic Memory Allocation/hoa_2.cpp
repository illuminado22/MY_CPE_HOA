#include <iostream>
#include <string>

// --- Class Definition for Fruit ---
class Fruit {
public:
    //Attributes
    std::string name;
    int price;
    int quantity;

    // Constructor
    Fruit(std::string newName, int newPrice, int newQuantity) {
        name = newName;
        price = newPrice;
        quantity = newQuantity;
    }
    // Destructor
    ~Fruit() {
    }
    // Copy Constructor
    Fruit(const Fruit &copyFruit) {
        Fruit::name = copyFruit.name;
        Fruit::price = copyFruit.price;
        Fruit::quantity = copyFruit.quantity;
    }
    // Copy Assignment Operator
    Fruit &operator=(const Fruit &copyFruit) {
        if (this != &copyFruit) {
            Fruit::name = copyFruit.name;
            Fruit::price = copyFruit.price;
            Fruit::quantity = copyFruit.quantity;
        }
        return *this;
    }

    void calculateSum() const {
        std::cout << "Total price of " << name << " is: " << price * quantity <<
            std::endl;

    }
};

// --- Class Definition for Vegetables ---
class Vegetables {
public:
    //Attributes
    std::string name;
    int price;
    int quantity;

    // Constructor
    Vegetables(std::string newName, int newPrice, int newQuantity) {
        name = newName;
        price = newPrice;
        quantity = newQuantity;
    }
    // Destructor
    ~ Vegetables() {
    }
    // Copy Constructor
    Vegetables(const Vegetables &copyVegetables) {
        Vegetables::name = copyVegetables.name;
        Vegetables::price = copyVegetables.price;
        Vegetables::quantity = copyVegetables.quantity;
    }
    // Copy Assignment Operator
    Vegetables &operator=(const Vegetables &copyVegetables) {
        if (this != &copyVegetables) {
            Vegetables::name = copyVegetables.name;
            Vegetables::price = copyVegetables.price;
            Vegetables::quantity = copyVegetables.quantity;
        }
        return *this;
    }

    void calculateSum() const {
        std::cout << "Total price of " << name << " is: " << price * quantity <<
            std::endl;

    }
};

// --- Single Main Function ---
int main() {
    std::cout << "Activity No. 2 - Classes and Objects" << std::endl;
    std::cout << "--- Fruits ---" << std::endl;

    Fruit apple("Apple", 3, 10);
    std::cout << "Fruits: " << apple.name << " Price: " << apple.price << " Quantity: " << apple.quantity << std::endl;
    apple.calculateSum();

    Fruit orange(apple); // This is a copy of apple
    std::cout << "Fruits: " << orange.name << " Price: " << orange.price << " Quantity: " << orange.quantity << std::endl;
    orange.calculateSum();

    Fruit banana("Banana", 2, 5);
    std::cout << "Fruits: " << banana.name << " Price: " << banana.price << " Quantity: " << banana.quantity << std::endl;
    banana.calculateSum();

    std::cout << "\n--- Vegetables ---" << std::endl;

    Vegetables squash("Squash", 3, 10);
    Vegetables carrots(squash); // This is a copy of squash
    Vegetables kangkong("kangkong", 2, 5);

    std::cout << " Vegetables: " << squash.name << " Price: " << squash.price << " Quantity: " << squash.quantity << std::endl;
    squash.calculateSum();
    std::cout << " Vegetables: " << carrots.name << " Price: " << carrots.price << " Quantity: " << carrots.quantity << std::endl;
    carrots.calculateSum();
    std::cout << " Vegetables: " << kangkong.name << " Price: " << kangkong.price << " Quantity: " << kangkong.quantity << std::endl;
    kangkong.calculateSum();

    return 0;
}