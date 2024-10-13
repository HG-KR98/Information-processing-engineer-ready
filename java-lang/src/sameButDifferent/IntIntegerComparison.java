package sameButDifferent;

public class IntIntegerComparison {
    public static void main(String[] args) {
        int num1 = 100;
        Integer num2 = 100;

        System.out.println("num1 == num2: " + (num1 == num2));

        Integer num3 = 100;
        Integer num4 = 100;
        Integer num5 = Integer.valueOf(100);

        System.out.println("num3 == num4: " + (num3 == num4));
        System.out.println("num3 == num5: " + (num3 == num5));
        System.out.println("num3.equals(num5): " + num3.equals(num5));

        // 맨 앞에 int, Integer를 넣은 것은 같다고 판단한다.
        // 언박싱이라고 하는데, 그냥 외우도록 하자.
        // Integer 100, 100은 캐싱된 값을 참조하므로 같다고 나온다.
        // Integer 180, 180 쓰고 비교하면 false 나온다.
        // new는 아예 다른 객체로 본다. 그래서 false로 나온다.
        // equals는 내용만 보기 때문에 같다고 나온다.
    }
}
