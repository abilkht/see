/*
 * guess.c
 *
 *  Created on: Sep 15, 2018
 *      Author: abok
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
	int actual_num, guessed_num, max = 9999, counter_each = 0, num_of_games = 0, counter_all = 0;
	float average = 0.0;
	bool exit, correct;
	char set;
	srand(time(NULL));
	exit = false;
	printf("WELCOME to the guessing game!\n");

	while(!exit){
		printf("MENU: (s) to start a game, (n) to set a new range, or (q) to quit:\n");
		scanf(" %c", &set);

		if (set == 's'){
			printf("The secret number is BETWEEN 0 AND %d. Guess:\n", max);
			actual_num = rand() % (max + 1);
			num_of_games++;
			correct = false;

			while(!correct){
				scanf("%d", &guessed_num);
				counter_each++;

				if (guessed_num > actual_num){
					printf("Too HIGH! Guess:\n");
				}
				else if (guessed_num < actual_num){
					printf("Too LOW! Guess:\n");
				}
				else {
					printf("Correct: You TOOK %d guesses!\n", counter_each);
					counter_all += counter_each;
					correct = true;
				}
			}
			counter_each = 0;
			average = (float)counter_all / num_of_games;
		}
		else if (set == 'n'){
			printf("Enter a new MAXIMUM:\n");
			scanf("%d", &max);
		}
		else if (set == 'q'){
			printf("Thanks for playing. Your guess count AVERAGE %.1f", average);
			exit = true;
		}
		else {
			printf("UNRECOGNIZED command\n");
		}
	}

	return 0;
}
