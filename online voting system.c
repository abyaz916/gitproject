#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_VOTERS 100
#define MAX_CANDIDATES 10

typedef struct {
    char name[MAX_NAME];
    int votes;
} Candidate;

typedef struct {
    char name[MAX_NAME];
    int hasVoted;
} Voter;

Candidate candidates[MAX_CANDIDATES];
Voter voters[MAX_VOTERS];
int candidateCount = 0;
int voterCount = 0;

void addCandidate();
void addVoter();
void castVote();
void displayResults();
int findVoterByName(char *name);
int findCandidateByName(char *name);

int main() {
    int choice;
    while(1) {
        printf("\nOnline Voting System Menu:\n");
        printf("1. Add Candidate\n");
        printf("2. Add Voter\n");
        printf("3. Cast Vote\n");
        printf("4. Display Results\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // To consume the newline character left by scanf

        switch(choice) {
            case 1:
                addCandidate();
                break;
            case 2:
                addVoter();
                break;
            case 3:
                castVote();
                break;
            case 4:
                displayResults();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void addCandidate() {
    if(candidateCount >= MAX_CANDIDATES) {
        printf("Cannot add more candidates.\n");
        return;
    }
    printf("Enter candidate name: ");
    fgets(candidates[candidateCount].name, MAX_NAME, stdin);
    candidates[candidateCount].name[strcspn(candidates[candidateCount].name, "\n")] = '\0'; // Remove newline character
    candidates[candidateCount].votes = 0;
    candidateCount++;
    printf("Candidate added successfully.\n");
}

void addVoter() {
    if(voterCount >= MAX_VOTERS) {
        printf("Cannot add more voters.\n");
        return;
    }
    printf("Enter voter name: ");
    fgets(voters[voterCount].name, MAX_NAME, stdin);
    voters[voterCount].name[strcspn(voters[voterCount].name, "\n")] = '\0'; // Remove newline character
    voters[voterCount].hasVoted = 0;
    voterCount++;
    printf("Voter added successfully.\n");
}

void castVote() {
    char voterName[MAX_NAME];
    char candidateName[MAX_NAME];
    int voterIndex, candidateIndex;

    printf("Enter your name: ");
    fgets(voterName, MAX_NAME, stdin);
    voterName[strcspn(voterName, "\n")] = '\0'; // Remove newline character

    voterIndex = findVoterByName(voterName);
    if(voterIndex == -1) {
        printf("Voter not found.\n");
        return;
    }
    if(voters[voterIndex].hasVoted) {
        printf("You have already voted.\n");
        return;
    }

    printf("Enter candidate name: ");
    fgets(candidateName, MAX_NAME, stdin);
    candidateName[strcspn(candidateName, "\n")] = '\0'; // Remove newline character

    candidateIndex = findCandidateByName(candidateName);
    if(candidateIndex == -1) {
        printf("Candidate not found.\n");
        return;
    }

    candidates[candidateIndex].votes++;
    voters[voterIndex].hasVoted = 1;
    printf("Vote cast successfully.\n");
}

void displayResults() {
    printf("\nVoting Results:\n");
    for(int i = 0; i < candidateCount; i++) {
        printf("Candidate: %s, Votes: %d\n", candidates[i].name, candidates[i].votes);
    }
}

int findVoterByName(char *name) {
    for(int i = 0; i < voterCount; i++) {
        if(strcmp(voters[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int findCandidateByName(char *name) {
    for(int i = 0; i < candidateCount; i++) {
        if(strcmp(candidates[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}
