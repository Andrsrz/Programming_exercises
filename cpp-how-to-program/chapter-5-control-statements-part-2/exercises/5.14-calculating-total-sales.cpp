/*
 * C++ How To Program - 5.14 : Calculating Total Sales
 * Description in txt file.
*/

#include <iostream>
#include <vector>

// Avoid magic numbers
const float P1 = 2.98;
const float P2 = 4.50;
const float P3 = 9.98;
const float P4 = 4.49;
const float P5 = 6.87;

// Function declaration
std::vector<float> fillVector(float, float, float, float, float);

int main(int argc, char** argv){
    std::vector<float> products = fillVector(P1, P2, P3, P4, P5);

    for(int i = 1; i < argc - 1; i++){
        int product = 0;
        switch(product){
            case 0:
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                break;
        }
    }

    return 0;
}

// Function implementation
std::vector<float> fillVector(float product1,
                            float product2,
                            float product3,
                            float product4,
                            float product5){
    std::vector<float> products;
    products.push_back(product1);
    products.push_back(product2);
    products.push_back(product3);
    products.push_back(product4);
    products.push_back(product5);
    return products;
}
