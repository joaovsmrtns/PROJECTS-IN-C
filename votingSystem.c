#include <stdio.h>

int main() {

    int candidate1 = 0, candidate2 = 0, candidate3 = 0, nullVotes = 0, blankVotes = 0, totalVotes = 0, vote = 0; // Counters for each candidate, null votes, blank votes and total votes.

    printf("CHOOSE YOUR CANDIDATE (1, 2 or 3). ENTER 4 FOR A BLANK VOTE. TO NULLIFY, ENTER ANY OTHER NUMBER. TO END THE VOTING, ENTER 0:"); // Asks the user to choose a candidate or a vote type.
    scanf("%d", &vote); // Reads the user's vote.

    while (vote != 0) { // While the vote is different from 0, the program keeps reading votes.
        switch (vote) {
            case 1: // If the vote is 1, adds 1 to candidate 1's counter.
                candidate1++;
                break;
            case 2: // If the vote is 2, adds 1 to candidate 2's counter.
                candidate2++;
                break;
            case 3: // If the vote is 3, adds 1 to candidate 3's counter.
                candidate3++;
                break;
            case 4: // If the vote is 4, adds 1 to the blank votes counter.
                blankVotes++;
                break;
            default: // If the vote is anything other than 1, 2, 3 or 4, adds 1 to the NULL votes.
                nullVotes++;
        }
        totalVotes++; // Adds 1 to the total every time a vote is read.

        printf("CHOOSE YOUR CANDIDATE (1, 2 or 3). ENTER 4 FOR A BLANK VOTE. TO NULLIFY, ENTER ANY OTHER NUMBER. TO END THE VOTING, ENTER 0:\n");
        scanf("%d", &vote);
    }

    if (candidate1 > candidate2 && candidate1 > candidate3) { // Checks which candidate got the most votes and shows the result.
        printf("CANDIDATE #1 WINS WITH %d VOTES.\n", candidate1);

    } else if (candidate2 > candidate1 && candidate2 > candidate3) { // Checks whether candidate 2 got more votes than the others and shows the result.
        printf("CANDIDATE #2 WINS WITH %d VOTES.\n", candidate2);

    } else if (candidate3 > candidate1 && candidate3 > candidate2) { // Checks whether candidate 3 got more votes than the others and shows the result.
        printf("CANDIDATE #3 WINS WITH %d VOTES.\n", candidate3);

    } else { // If there is a tie between candidates, shows the tie message.
        printf("IT'S A TIE!\n");
    }

    printf("VOTES FOR CANDIDATE #1: %d\n", candidate1); // Shows candidate 1's vote count.
    printf("VOTES FOR CANDIDATE #2: %d\n", candidate2); // Shows candidate 2's vote count.
    printf("VOTES FOR CANDIDATE #3: %d\n", candidate3); // Shows candidate 3's vote count.
    printf("BLANK VOTES: %d\n", blankVotes); // Shows the number of blank votes.
    printf("NULL VOTES: %d\n", nullVotes); // Shows the number of null votes.
    printf("TOTAL VOTES: %d\n", totalVotes); // Shows the total number of votes cast.

    return 0;
}
