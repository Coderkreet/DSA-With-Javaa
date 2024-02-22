import java.util.Scanner;

/**
 * Implement
 */
public class Implement {

    public static void main(String[] args) {
        //User Input 
    Scanner sc = new Scanner(System.in);
    int size = sc.nextInt();

        int [] arr = new int[size];

        // User input Array
    for (int i = 0; i < arr.length; i++) {
        arr[i] = sc.nextInt();
    }

    System.out.println();
    // Print Array 
    for (int i = 0; i < arr.length; i++) {
        System.out.println(arr[i]);
    }


    }
}
