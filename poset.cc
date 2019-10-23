#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <utility>

using PosetID = unsigned long;
using ElementID = unsigned long;
using ElementsRelated = std::unordered_set<ElementID>;
using Poset = std::map<ElementID, std::pair<ElementsRelated, ElementsRelated>>;
using PosetMap = std::map<PosetID, Poset>;

PosetMap& posetMap(){
    static PosetMap ans;
    return ans;
}

PosetID newPosetID(){
    static PosetID id = 0;
    id++;
    return id;
}

unsigned long poset_new(){
    PosetID id = newPosetID();
    Poset poset;
    posetMap().insert(std::pair<PosetID , Poset >(id, poset));
    return id;
}

/* Tworzy nowy poset i zwraca jego identyfikator. */

void poset_delete(unsigned long id) {
    auto it = posetMap().find(id);
    if (it != posetMap().end()){
        posetMap().erase(it); // TODO kwestia usuniecia całego posetu z pamięci
    }

/*  Jeżeli istnieje poset o identyfikatorze id, usuwa go, a w przeciwnym
  przypadku nic nie robi.
  */
}
size_t poset_size(unsigned long id){
    auto it = posetMap().find(id);
    if (it != posetMap().end()){

    }
}

/*Jeżeli istnieje poset o identyfikatorze id, to wynikiem jest liczba jego
elementów, a w przeciwnym przypadku 0.*/

bool poset_insert(unsigned long id, char const *value);

/*Jeżeli istnieje poset o identyfikatorze id i element value nie należy do
    tego zbioru, to dodaje element do zbioru, a w przeciwnym przypadku nic nie
robi. Nowy element nie jest w relacji z żadnym elementem. Wynikiem jest
true, gdy element został dodany, a false w przeciwnym przypadku.*/

bool poset_remove(unsigned long id, char const *value);

/*Jeżeli istnieje poset o identyfikatorze id i element value należy do tego
    zbioru, to usuwa element ze zbioru oraz usuwa wszystkie relacje tego
elementu, a w przeciwnym przypadku nic nie robi. Wynikiem jest true, gdy
element został usunięty, a false w przeciwnym przypadku.*/

bool poset_add(unsigned long id, char const *value1, char const *value2);

/*Jeżeli istnieje poset o identyfikatorze id oraz elementy value1 i value2
należą do tego zbioru i nie są w relacji, to rozszerza relację w taki
sposób, aby element value1 poprzedzał element value2 (domyka relację
przechodnio), a w przeciwnym przypadku nic nie robi. Wynikiem jest true,
        gdy relacja została rozszerzona, a false w przeciwnym przypadku.*/

bool poset_del(unsigned long id, char const *value1, char const *value2);

/*Jeżeli istnieje poset o identyfikatorze id, elementy value1 i value2
należą do tego zbioru, element value1 poprzedza element value2 oraz
usunięcie relacji między elementami value1 i value2 nie zaburzy warunków
bycia częściowym porządkiem, to usuwa relację między tymi elementami,
a w przeciwnym przypadku nic nie robi. Wynikiem jest true, gdy relacja
została zmieniona, a false w przeciwnym przypadku.*/

bool poset_test(unsigned long id, char const *value1, char const *value2);

/* Jeżeli istnieje poset o identyfikatorze id, elementy value1 i value2
 należą do tego zbioru oraz element value1 poprzedza element value2, to
 wynikiem jest true, a w przeciwnym przypadku false.*/

void poset_clear(unsigned long id);

/* Jeżeli istnieje poset o identyfikatorze id, usuwa wszystkie jego elementy
 oraz relacje między nimi, a w przeciwnym przypadku nic nie robi.*/

int main() {
    //std::cout << ' ' << poset_new();

    /*PosetID id = 0;
    Poset poset;
    std::cout << posetMap().size();
    posetMap().insert(std::pair<PosetID, Poset>(id, poset));
    std::cout << '\n' << posetMap().size();
    posetMap().clear();
    std::cout << '\n' << posetMap().size();*/



    return 0;
}
