#include <stdio.h>
#include <ctype.h>

int main () {

    char questions[][100] = {"What is the largest planet in the solar system?",
                             "What is the nearest star system to the solar system?",
                             "What planet has the most moons?",
                             "Is the earth flat?"};
    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\n.D. Neptune",
                           "A. Luhman 16\nB. Barnard's Star\nC. Alpha Centauri\n.D. Sirius System",
                           "A. Earth\nB. Mars\nC. Jupiter\n.D. Saturn",
                           "A. Yes\nB. No"};
    char answerKey[] = {'A', 'C', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;
    char input[100];

    printf("--- ASTROLOGY QUIZ ---\n");

    for (int i = 0; i < questionCount; i++) {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your answer: ");
        fgets(input, sizeof(input), stdin);

        guess = toupper(input[0]);

        if (guess == answerKey[i]) {
            printf("Correct Answer!\n");
            score++;
        } else {
            printf("Wrong Answer!\n");
        }
    }

    printf("Overall Score: %d / %d", score, questionCount);

    return 0;
}