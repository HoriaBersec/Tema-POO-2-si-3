#include <iostream>
#include <string>

#include "ShoppingCart.h"

int main() {
  ShoppingCart<std::string> cart;

  // Try/catch block to handle invalid input
  try {
    std::cout << "Enter the name and price of the item (enter 'done' to finish): ";
    std::string name;
    double price;

    while (std::cin >> name >> price) {
      if (name == "done") {
        break;
      }

      // Use smart pointers to manage item ownership
      std::unique_ptr<MenuItem<std::string>> menuItem(new MenuItem<std::string>(name, price, 1));
      cart.addItem(std::move(menuItem));
    }

    // Calculate the total price
    double totalPrice = cart.getTotalPrice();
    std::cout << "Total price: " << totalPrice << std::endl;

  // Handle invalid input or file operations
  } catch (const std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}
