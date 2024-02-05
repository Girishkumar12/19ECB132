#include <stdio.h>
#include <stdlib.h>

char *stack;
int top_of_stack = -1;
int stack_size = 0;

void push(char ch) {
    stack = realloc(stack, (++stack_size) * sizeof(char));
    stack[++top_of_stack] = ch;
}

void pop() {
    --top_of_stack;
}

int main() {
    char input[100];
    scanf("%s", input);

    stack = malloc(0);

    for (int i = 0; input[i] != '\0'; ++i) {
        if (input[i] == '(' || input[i] == '{' || input[i] == '[') {
            push(input[i]);
        } else if (input[i] == ')' || input[i] == '}' || input[i] == ']') {
            if (top_of_stack == -1) {
                printf("output : invalid\n");
                free(stack);
                return 0;
            }

            char top = stack[top_of_stack];
            pop();

            if ((input[i] == ')' && top != '(') ||
                (input[i] == '}' && top != '{') ||
                (input[i] == ']' && top != '[')) {
                printf("output: invalid\n");
                free(stack);
                return 0;
            }
        }
    }

    if (top_of_stack == -1) {
        printf("output: valid\n");
    } else {
        printf("output: invalid\n");
    }

    free(stack);
    return 0;
}
