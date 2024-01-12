#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Item.h"

template <typename T>
class ShoppingCart {
public:
  void addItem(std::unique_ptr<Item<T>> item);

  double getTotalPrice() const;

  void clearCart();
};

#endif  // SHOPPINGCART_H
