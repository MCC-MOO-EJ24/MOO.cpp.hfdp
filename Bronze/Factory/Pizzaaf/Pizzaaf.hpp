#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_FACTORY_PIZZAAF_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_FACTORY_PIZZAAF_HPP_

#include <assert.h>

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "Dough.hpp"
#include "ThinCrustDough.hpp"
#include "ThickCrustDough.hpp"

#include "Cheese.hpp"
#include "RegginanoCheese.hpp"
#include "MozzarellaCheese.hpp"

#include "Sauce.hpp"
#include "MarinaraSauce.hpp"
#include "PlumTomatoSauce.hpp"

#include "Veggies.hpp"
#include "BlackOlives.hpp"
#include "Garlic.hpp"
#include "Mushroom.hpp"
#include "Onion.hpp"
#include "RedPepper.hpp"
#include "Spinach.hpp"
#include "EggPlant.hpp"

#include "Pepperoni.hpp"
#include "SlicedPepperoni.hpp"

#include "Clams.hpp"
#include "FreshClams.hpp"
#include "FrozenClams.hpp"

#include "PizzaIngredientFactory.hpp"
#include "NYPizzaIngredientFactory.hpp"
#include "ChicagoPizzaIngredientFactory.hpp"

#include "Pizza.hpp"
#include "CheesePizza.hpp"
#include "VeggiePizza.hpp"
#include "PepperoniPizza.hpp"
#include "ClamPizza.hpp"

#include "PizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"

#endif
