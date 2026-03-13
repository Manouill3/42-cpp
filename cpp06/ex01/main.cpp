#include "Serializer.hpp"

int main(void) {
    Data *data = new Data("testtest");
    uintptr_t ptr;
    Data *redata;

    std::cout << data->data << std::endl;
    ptr = Serializer::serialize(data);
    redata = Serializer::deserialize(ptr);
    std::cout << redata->data << std::endl;

    delete data;
}
