import java.util.*;

public class b {

    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);
        int N = stdIn.nextInt();
        int X = stdIn.nextInt();
        int Y = stdIn.nextInt();
        int Z = stdIn.nextInt();

        boolean[] q = new boolean[N + 1];
        int[] A = new int[N + 1];
        int[] B = new int[N + 1];
        int[] C = new int[N + 1];

        for (int i = 1; i <= N; i++) {
            A[i] = stdIn.nextInt();

        }
        for (int i = 1; i <= N; i++) {
            B[i] = stdIn.nextInt();
            C[i] = A[i] + B[i];
        }

        for (int i = 1; i <= X; i++) {
            int k = 1;
            while ((k <= N) && q[k]) {
                k++;
            }
            int max = A[k];
            int maxIndex = k;
            for (int j = 1; j <= N; j++) {
                if (q[j]) {
                    continue;
                }
                int value = A[j];
                if (value > max) {
                    max = value;
                    maxIndex = j;
                }
            }
            q[maxIndex] = true;
        }

        for (int i = 1; i <= Y; i++) {
            int k = 1;
            while ((k <= N) && q[k]) {
                k++;
            }
            int max = B[k];
            int maxIndex = k;
            for (int j = 1; j <= N; j++) {
                if (q[j]) {
                    continue;
                }
                int value = B[j];
                if (value > max) {
                    max = value;
                    maxIndex = j;
                }
            }
            q[maxIndex] = true;
        }

        for (int i = 1; i <= Z; i++) {
            int k = 1;
            while ((k <= N) && q[k]) {
                k++;
            }
            int max = C[k];
            int maxIndex = k;
            for (int j = 1; j <= N; j++) {
                if (q[j]) {
                    continue;
                }
                int value = C[j];
                if (value > max) {
                    max = value;
                    maxIndex = j;
                }
            }
            q[maxIndex] = true;
        }

        for (int i = 1; i <= N; i++) {
            if (q[i]) {
                System.out.println(i);
            }
        }

    }

}
