//How to output a model given in brand using only char arrays, not strings

#include <iostream>
#include <cstring>
using namespace std;

struct car{
    char brand[];
    char model[];
    double cost;
    double max_speed;
    struct car* next;
};

void car_list(char the_brand[], car* p, char model[]){ //This function doesn't output anything and takes the_brand and a pointer as inputs
    int val = -1; //Create an int flag with negative value
    strcpy(model, "\0"); //Gives the model the null string
    car* t; //Creates another pointer and
    t = p; //sets it equal to the one from the input
    while(t != NULL){ //Until there's something in the list
        if((strcmp(t->brand, the_brand) == 0) && val == -1){ //Base case: Substitutes val with an existing (>0) cost value and, as specified by the function, substitutes the null string with the pointer pointed at the moment
            strcpy(model, t->model);
            val = t->cost;
            t = t->next;
        }
    while(strcmp(t->brand, the_brand) == 0){ //All other cases. Already having a >0 value and at least one existing model, the whole list can be visited to find the cheapest
        if(t->cost < val){
            val = t->cost;
            strcpy(model, t->model);
        }
    t = t->next;
    } //If the list doesn't exist, the output model is \0, otherwise it enters the cycle, in which at least a model exists
    }
}
