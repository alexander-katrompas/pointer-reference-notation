#include <iostream>
#include <string>

// struct ADT for demonstration
struct s {
    int key;
    std::string value;
    s(int k, std::string v) : key(k), value(v) {}
};

// prototype declarations
void swap(int*, int*);
void swap(int&, int&);
void print_struct_ptr(s*);
void print_struct_ref(s&);

// function definitions
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void print_struct_ptr(s *obj) {
    std::cout << "Key: " << obj->key << ", Value: " << obj->value << std::endl;
}

void print_struct_ref(s &obj) {
    std::cout << "Key: " << obj.key << ", Value: " << obj.value << std::endl;
}


int main() {

    int a = 5, b = 10;

    std::cout << "Before swap (using pointers): a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "After swap (using pointers): a = " << a << ", b = " << b << std::endl;

    std::cout << "Before swap (using references): a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap (using references): a = " << a << ", b = " << b << std::endl;
    std::cout << std::endl;

    s *obj1 = new s(1, "Object One");
    s obj2(2, "Object Two");

    print_struct_ptr(obj1);
    print_struct_ref(obj2);
    
    std::cout << std::endl;

    return 0;
}
