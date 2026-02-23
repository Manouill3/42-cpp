#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &obj) {(void)obj;}

Serializer &Serializer::operator=(const Serializer &obj) {
    (void)obj;
    return *this;
}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data *ptr) {
    uintptr_t res;

    res = reinterpret_cast<uintptr_t>(ptr);
    return res;
}

Data *Serializer::deserialize(uintptr_t raw) {
    Data *res;

    res = reinterpret_cast<Data *>(raw);
    return res;
}
