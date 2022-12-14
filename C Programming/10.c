#include <stdio.h>
#define DEBUG   // [ATTENTION] Added for data integrity check. REMOVE THIS ROW BEFORE SUBMISSION OR GET UNACCEPTED.

typedef struct Scores {
    int advmath;
    int physics;
    int english;
    int average;
        } Score;

typedef struct Student_Information {
    long idnum;
    char name[20];
    Score scores;
        } infStu;

int main() {
    infStu students[10];
    int i;
    scanf("%d",&i);

    for (int j=0; j < i; ++j) {
        scanf("%ld %s %d %d %d",&students[j].idnum,&students[j].name,&students[j].scores.advmath,&students[j].scores.physics,&students[j].scores.english);
        students[j].scores.average=(students[j].scores.advmath+students[j].scores.physics+students[j].scores.english)/3;
    }

    for (int j = 0; j < i; ++j) {
#ifdef DEBUG   // [INFO] Added for data integrity check, Whether remove row 28-30 or not is up to you.
        printf("%dth student = %s, ID number = %ld\n",j+1,students[j].name,students[j].idnum);
#endif
        printf("The average score of the %dth student is %d.\n",j+1,students[j].scores.average);
    }

    return 0;
}