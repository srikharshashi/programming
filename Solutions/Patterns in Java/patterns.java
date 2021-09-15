class patterns {

    public static void main(String args[]) {

        pattern5(7);
    }

    static void pattern1(int n) {
        // *
        // * *
        // * * *
        // * * * *
        // * * * * *
        // * * * *
        // * * *
        // * *
        // *
        for (int i = 1; i <= 2 * n - 1; i++) {
            if (i <= n) {
                for (int j = 1; j <= i; j++) {
                    System.out.print("* ");
                }
                System.out.println();
            } else if (i > n) {
                for (int j = 2 * n - i; j >= 1; j--) {
                    System.out.print("* ");
                }
                System.out.println();
            }
        }

    }

    static void pattern2(int n) {
        // *
        // * *
        // * * *
        // * * * *
        // * * * * *
        // * * * *
        // * * *
        // * *
        // *
        for (int i = 1; i <= 2 * n - 1; i++) {
            if (i <= n) {
                for (int k = 1; k <= n - i; k++) {
                    System.out.print(" ");

                }
                for (int j = 1; j <= i; j++) {
                    System.out.print("* ");
                }
                System.out.println();
            } else if (i > n) {
                for (int k = 1; k <= i - n; k++) {
                    System.out.print(" ");

                }
                for (int j = 2 * n - i; j >= 1; j--) {
                    System.out.print("* ");
                }
                System.out.println();
            }
        }
    }

    static void pattern3(int n)

    {
        // 1
        // 2 1 2
        // 3 2 1 2 3
        // 4 3 2 1 2 3 4
        // 5 4 3 2 1 2 3 4 5
        for (int i = 1; i <= n; i++) {
            // Spaces
            for (int k = 1; k <= 2 * (n - i); k++) {
                System.out.print(" ");
            }
            // System.out.println("sp = "+(n-i));

            // Loop1
            for (int j = i; j >= 2; j--) {
                System.out.print(" " + j);
            }

            // Loop 2
            for (int l = 1; l <= i; l++) {
                System.out.print(" " + l);
            }
            System.out.println();

        }

    }

    static void pattern4(int n) {
        // 0 0 0 0 0 0 0 0 0 0 0 0 0
        // 0 1 1 1 1 1 1 1 1 1 1 1 0
        // 0 1 2 2 2 2 2 2 2 2 2 1 0
        // 0 1 2 3 3 3 3 3 3 3 2 1 0
        // 0 1 2 3 4 4 4 4 4 3 2 1 0
        // 0 1 2 3 4 5 5 5 4 3 2 1 0
        // 0 1 2 3 4 5 6 5 4 3 2 1 0
        // 0 1 2 3 4 5 5 5 4 3 2 1 0
        // 0 1 2 3 4 4 4 4 4 3 2 1 0
        // 0 1 2 3 3 3 3 3 3 3 2 1 0
        // 0 1 2 2 2 2 2 2 2 2 2 1 0
        // 0 1 1 1 1 1 1 1 1 1 1 1 0
        // 0 0 0 0 0 0 0 0 0 0 0 0 0
        for (int i = 0; i <= 2 * n; i++) {
            for (int j = 0; j <= 2 * n; j++) {
                int up = i;
                int down = (2 * n) - i;
                int left = j;
                int right = (2 * n) - j;
                int num = Math.min(Math.min(up, down), Math.min(left, right));
                System.out.print(num + " ");

            }
            System.out.println();
        }
    }

    static void pattern5(int n) {
        // 4 4 4 4 4 4 4
        // 4 3 3 3 3 3 4
        // 4 3 2 2 2 3 4
        // 4 3 2 1 2 3 4
        // 4 3 2 2 2 3 4
        // 4 3 3 3 3 3 4
        // 4 4 4 4 4 4 4
        for (int i = 0; i <= (2 * n) - 2; i++) {
            for (int j = 0; j <= (2 * n) - 2; j++) {
                int up = i;
                int down = ((2 * n) - 2) - i;
                int left = j;
                int right = ((2 * n) - 2) - j;
                int num = Math.min(Math.min(up, down), Math.min(left, right)); 

                System.out.print(n - num + " ");
            }
            System.out.println();
        }
    }
}
