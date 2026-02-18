#include <iostream>

class DynamicIntArray {

    private:

    int* arr;
    int capacity;
    int size;


    public:

    DynamicIntArray(int capacity) {

        this->capacity = capacity;
        this->size  = 0;
        this->arr = new int[capacity];

        std:: cout << "Array constructed with capacity:" << capacity << std::endl;
    }

    ~DynamicIntArray() {
        delete[] this->arr;
        std:: cout << " Memory cleaned. \n";
    }



    void resize() {

        std:: cout<< "\nResize called. Current capacity:" <<capacity << " -> " << capacity*2 << "\n";

        int new_capacity = this->capacity*2;
        int* new_arr = new int[new_capacity];



        // Copy old data to new array

        for(int i= 0; i<this->size; i++) {

            new_arr[i] = this->arr[i];


        }
        // delete old array
        delete[] this->arr;

        // point to new array
        this->arr = new_arr;
        this->capacity = new_capacity;

        std:: cout << " Resize complete. New Capacity:" << this->arr << "\n\n";




    }
    void push_back(int data) {
        std::cout << "--> push_back(" << data << ") called. Current count: " << this->size << "\n";


        if ( this->size == this->capacity) {


            resize();
        }
        this->arr[this->size] = data;
        this->size++;

        std::cout << "Added" << data << " to array. New count:" <<this->size << "\n";
    }

    // Print function
    void print() {
        std::cout << "Array content: ";
        for(int i = 0; i < this->size; i++) {
            std:: cout << this->arr[i] << " ";
        }
        std::cout << "\n";
    }
};


int main() {


    DynamicIntArray obj(3);
    obj.push_back(10);
    obj.push_back(20);
    obj.push_back(30);
    obj.push_back(40);
    obj.push_back(50);
    obj.push_back(70);
    obj.print();


    return 0;
}