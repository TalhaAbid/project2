#include "ArrayBag.hpp"

template<typename ItemType>
ArrayBag<ItemType>::ArrayBag(): item_count_(0){
}
template<typename ItemType>
int ArrayBag<ItemType>::getCurrentSize() const{
   return item_count_;

}
template<typename ItemType>
bool ArrayBag<ItemType>::isEmpty() const{
    return item_count_ == 0;
}
template<typename ItemType>
bool ArrayBag<ItemType>::add(const ItemType& new_entry){

}


