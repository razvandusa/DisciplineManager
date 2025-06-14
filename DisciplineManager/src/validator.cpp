#include "../headers/validator.h"
#include "../headers/exceptions.h"

#include <stdexcept>
#include <vector>

/*
 *  Verifica daca id-ul este valid
 */
bool Validator::id_valid(int id) {
    if (id < 0) {
        return false;
    }
    return true;
}

/*
 *  Verifica daca denumirea este valida
 */
bool Validator::denumire_valida(const std::string& denumire) {
    std::vector <std::string> denumiri_valide = {"Matematica","Limba Romana", "Istorie", "Geografie", "Religie", "Informatica"};
    for (const auto & d : denumiri_valide) {
        if (denumire == d) {
            return true;
        }
    }
    return false;
}

/*
 *  Verifica daca orele sunt valide
 */
bool Validator::ore_valide(int ore) {
    if (ore > 168) {
        return false;
    }
    return true;
}

/*
 *  Verifica daca tipul este valid
 */
bool Validator::tip_valid(const std::string& tip) {
    std::vector <std::string> denumiri_valide = {"Obligatorie","Optionala","Facultativa"};
    for (const auto & d : denumiri_valide) {
        if (tip == d) {
            return true;
        }
    }
    return false;
}

int Validator::conversie_valida(const std::string& intreg) {
    try {
        return std::stoi(intreg);
    } catch (...) {
        throw NotValid("Orele sau ID-ul trebuie sa fie un numar intreg valid!");
    }
}