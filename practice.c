













//Determine the grade of a student based on their score. If the score is above 90,
//it's an 'A'. If the score is between 80 and 90, check if it's above 85 for an 'A-' or else 'B+'. Below 80, if
//it's above 70, it's a 'C', otherwise, it's a 'D'.
#include  <stdio.h> 

int main() {
    int score = 88;

    // Check if score is greater than 90
    if (score  >  90) {
        printf("Grade: A\n");
    } else {
        // Score is 90 or below, check if score is greater than 80
        if (score  >  80) {
            // Score is between 81 and 90, check if score is above 85
            if (score  >  85) {
                printf("Grade: A-\n");
            } else {
                printf("Grade: B+\n");
            }
                } else {
            // Score is 80 or below, check if score is above 70
            if (score  >  70) {
                printf("Grade: C\n");
            } else {
                printf("Grade: D\n");
            }
        }
    }
    return 0;
}


