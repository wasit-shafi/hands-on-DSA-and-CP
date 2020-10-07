/**
 * @author WasitShafi
 * @since 06-OCT-2020
 */

import java.util.*;

public class NQueen {
  public static void printBoard(int[][] board, int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (board[i][j] == 1) {
          System.out.print("Q ");
        } else {
          System.out.print("_ ");
        }
      }
      System.out.println();
    }
    System.out.println("\n");
  }

  public static boolean isSafe(int[][] board, int r, int c, int n) {
    // column
    for (int row = r; row >= 0; row--) {
       if (board[row][c] == 1) {
        return false;
       }
    }
    // upper-left diagonal
    for (int row = r, col = c; row >= 0 && col >= 0; row--, col--) {
      if (board[row][col] == 1) {
        return false;
      }
    }
    // upper-right diagonal
    for (int row = r, col = c; row >= 0 && col <= 0; row--, col++) {
      if (board[row][col] == 1) {
        return false;
      }
    }
    return true; // safe to place queen at board[i][j]
  }
  
  public static boolean solveNQueen(int[][] board, int i, int n) {
    if (i == n) {
      printBoard(board, n);
      return true; // if we return here false then it will print all the possible combinations
    } else {
      boolean isPlacedNextQueen;
      for (int j = 0; j < n; j++) {
        if (isSafe(board, i, j, n)) {
          board[i][j] = 1;
          isPlacedNextQueen = solveNQueen(board, i +1, n);
          if (isPlacedNextQueen == true) {
            return true;
          }
          board[i][j] = 0;
        }
      }
    }
    return false;
  }

  public static void main(String[] args) {
    int n;
    int[][] board;
    Scanner scanner = new Scanner(System.in);
    
    System.out.print("Enter size of board(N > 3)... ");
    n = scanner.nextInt();

    if (n > 3) {
      board = new int[n][n];
      solveNQueen(board, 0, n);
    }
    scanner.close();
  }
}