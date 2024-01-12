#ifndef ITEM_H
#define ITEM_H

template <typename T>
class Item {
public:
  Item(const T& data, double price);

  T getData() const;

  double getPrice() const;

private:
  T data;
  double price;
};

#endif  // ITEM_H
