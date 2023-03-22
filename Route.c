#include <stdio.h>

int main()
{
    int board[6][5] = {0}; // Initialize board with all zeros
    int row = 0, col = 0;
    int input;

    // Get initial position from user
    printf("Enter starting row and column (0-5, 0-4): ");
    scanf("%d %d", &row, &col);

    // Set the initial position of the robot to 1
    board[row][col] = 1;

    // Loop to get user input until 0 is entered
    do
    {
        printf("Enter command ONE BY ONE (1=right, 2=left, 3=down, 4=up, 0=exit): ");
        scanf("%d", &input);

        // Update robot position based on user input
        switch (input)
        {
        case 1: // right
            if (col < 4)
            {
                col++;
                board[row][col] = 1;
            }
            break;
        case 2: // left
            if (col > 0)
            {
                col--;
                board[row][col] = 1;
            }
            break;
        case 3: // down
            if (row < 5)
            {
                row++;
                board[row][col] = 1;
            }
            break;
        case 4: // up
            if (row > 0)
            {
                row--;
                board[row][col] = 1;
            }
            break;
        default:
            printf("Invalid entry!");
            break;
        }

    } while (input != 0);

    // Print the current board state
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}