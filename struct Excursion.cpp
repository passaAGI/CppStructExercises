#include <iostream>
using namespace std;

struct excursion{
    char start[];
    char arrival[];
    double km;
    int minutes;
    int seconds;
};

void slide(excursion* head, int i){
    excursion* tmp;
    tmp = head;
    while(i > 0){
        excursion* tmp;
        tmp = head;
        if(tmp == NULL){
            cout << "Error!" << endl;
            return NULL;
        }
        else{
            i--;
            tmp = tmp->next;
        }
        cout << tmp->start << tmp->arrival;
        return head;
    }
}
