#include "mediator/BusinessMediator.h"
#include "mediator/EstateOwner.h"
#include "mediator/GroceryStore.h"
#include "mediator/Restaurant.h"
#include "AccessKey.h"

#include <cassert>

int main() {
    EstateOwner estateOwner;
    GroceryStore groceryStore;
    Restaurant restaurant;
    BusinessMediator mediator(estateOwner, groceryStore, restaurant);

    // EstateOwner test
    auto oldPrice = estateOwner.SetEstateRentPrice(20000);
    assert(oldPrice == 10000);

    // GroceryStore test
    groceryStore.Supply(5);
    assert(groceryStore.Supply(0) == 5);

    // Restaurant test
    auto foodPrice = restaurant.CookFood();
    assert(foodPrice >= 0);

    return 0;
}