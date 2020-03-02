import java.util.Scanner;

public class HeapSort {

  public static void swap(int[] a, int b, int c) {
    int d = a[b];
    a[b] = a[c];
    a[c] = d;
  }

  public static void sort(int[] a, int n) {
    int b = (int) (n / 2 - 1);
    int i;
    for (i = b; i >= 0; i--) {
      if (n >= 2 * i + 1 + 1 && a[2 * i + 1] > a[i]) {
        swap(a, i, 2 * i + 1);
        if ((n >= 2 * (2 * i + 1) + 1 + 1 && a[2 * (2 * i + 1) + 1] > a[2 * i + 1]) || (
            n >= 2 * (2 * i + 1) + 2 + 1 && a[2 * (2 * i + 1) + 2] > a[2 * i + 1])) {
          sort(a, n);
        }
      }
      if (n > 2 * i + 2 && a[2 * i + 2] > a[i]) {
        swap(a, i, 2 * i + 2);
        if ((n >= 2 * (2 * i + 2) + 1 + 1 && a[2 * (2 * i + 2) + 1] > a[2 * i + 2]) || (
            n >= 2 * (2 * i + 2) + 2 + 1 && a[2 * (2 * i + 2) + 2] > a[2 * i + 2])) {
          sort(a, n);
        }
      }
    }

  }

  public static void main(String[] arge) {
    Scanner in = new Scanner(System.in);
    System.out.println("Please enter the length: ");
    int k = in.nextInt();
    int[] a = new int[k];
    int i;
    System.out.println("Please enter one by one, separated by spaces: ");
    for (i = 0; i < a.length; i++) {
      int p = in.nextInt();
      a[i] = p;
    }
    for (i = a.length; i > 0; i--) {
      sort(a, i);
      swap(a, 0, i - 1);
    }
    for (i = a.length - 1; i >= 0; i--) {
      System.out.print(a[i] + "  ");
    }

  }

}
