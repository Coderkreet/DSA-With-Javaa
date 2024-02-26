/**
 * InsertionArray
 */
public class InsertionArray {

    public static void ArrayInsertionFirst(int arr[] ,int size , int data){
        int[] temp = new int[size+1];
        for (int i = 0; i < size; i++) {
           temp[i+1] = arr[i];
        }
        temp[0] = data;

        for (int j = 0; j < temp.length; j++) {
            System.out.println(temp[j]);
        }
        
    }
    public static void main(String[] args) {
        
        int arr[]= {1,2,3,4};
        int size = arr.length;
        int data = 23;
        
      ArrayInsertionFirst(arr, size, data);

    }
}