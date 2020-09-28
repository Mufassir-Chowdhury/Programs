#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char name[10];
    int age;
} person_t;

void print(person_t *base, person_t *found){
    if(found)
        printf("[%ld](%s, %d)\n", found - base, found -> name, found -> age);
    else
        printf("(null)\n");
}

int cmp(const void *v1, const void *v2){
    return ((person_t *) v2) -> age - ((person_t *) v1) -> age;
}

int main(void){
    person_t pp[] = {{"Zulu", 9}, {"Sierra", 15}, {"Bravo", 23}, {"Lima", 40}};
    person_t key;
    key.age = 9;
    print(pp, bsearch(&key, pp, 4, sizeof(person_t), cmp));
    key.age = 20;
    print(pp, bsearch(&key, pp, 4, sizeof(person_t), cmp));
    key.age = 40;
    print(pp, bsearch(&key, pp, 4, sizeof(person_t), cmp));
    return 0;
}

