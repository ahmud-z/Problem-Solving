package com.ahmudz.problem_05;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

public class Problem_05 {

    static int[][] matrixTranspose(int matrix[][]) {

        int rows = matrix.length;
        int cols = matrix[0].length;

        int transMatrix[][] = new int[cols][rows];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                transMatrix[j][i] = matrix[i][j];
            }
        }

        return transMatrix;
    }

    static void rowSort(int arr[][]) {
        for (int i = 0; i < arr.length; i++) {
            Arrays.sort(arr[i]);
        }
    }

    static int colSort(int matrix[][]) {

        int temp[][] = matrixTranspose(matrix);
        int flag = 0;

        rowSort(temp);

        int finalArray[][] = matrixTranspose(temp);

        for (int i = finalArray.length - 1; i < finalArray.length; i++) {
            for (int j = 0; j < finalArray[0].length; j++) {
                if (finalArray[i][j] >= 10) {
                    flag = 1;
                }
            }
        }

        printArray(finalArray);

        return flag;
    }

    static void printArray(int arr[][]) {

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println("");
        }
    }

    static int[][] readFile() throws FileNotFoundException {
        File filePath = new File("C:\\Users\\Mahmud\\Desktop\\Problem Solving\\matrix.txt");
        Scanner file = new Scanner(filePath);

        int row = file.nextInt();
        int col = file.nextInt();

        int[][] matrix = new int[row][col];

        while (file.hasNext()) {

            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    matrix[i][j] = file.nextInt();
                }
            }
        }
        return matrix;
    }

    public static void main(String[] args) {

        try {
            int matrix[][] = readFile();
            int flag = colSort(matrix);

            if (flag == 0) {
                System.out.println("Water Quality is Good");
            } else {
                System.out.println("Water Quality is Downgraded");
            }

        } catch (FileNotFoundException e) {
            System.out.println("Exception: " + e);
        }

    }
}

//        int matrix[][] = {
//            {8, 10, 1, 27},
//            {2, 33, 1, 30},
//            {3, 22, 6, 1},
//            {4, 29, 2, 41},
//            {1, 30, 9, 2},
//            {3, 41, 1, 1}
//        };
