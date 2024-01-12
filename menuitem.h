#ifndef MENUITEM_H
#define MENUITEM_H

#include "Item.h"

template <typename T>
class MenuItem : public Item<T> {
public:
  MenuItem(const T& data, double price, int quantity);

  int getQuantity() const;

  double getTotalPrice() const;

private:
  int quantity;
};

#endif  // MENUITEM_H
