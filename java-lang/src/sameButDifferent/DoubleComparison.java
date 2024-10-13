package sameButDifferent;

public class DoubleComparison {
    public static void main(String[] args) {
        Double d1 = 128.0;
        Double d2 = 128.0;
        Double d3 = Double.valueOf(128.0);

        System.out.println("d1 == d2: " + (d1 == d2));
        System.out.println("d1 == d3: " + (d1 == d3));
        System.out.println("d1.equals(d2): " + d1.equals(d2));
        System.out.println("d1.equals(d3): " + d1.equals(d3));

        Double d4 = 127.0;
        Double d5 = 127.0;

        System.out.println("d4 == d5: " + (d4 == d5));
        System.out.println("d4.equals(d5): " + d4.equals(d5));

        // Double은 Int와 달리 캐싱하지 않습니다.
        // 그래서 == 으로 비교하면 모두 다르게 나온다.
    }
}
