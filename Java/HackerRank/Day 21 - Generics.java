// https://www.hackerrank.com/challenges/30-generics

static <T> void printArray(T[] arr) {
    for (int i = 0; i < arr.length; ++i) {
        System.out.println(arr[i]);
    }
}
