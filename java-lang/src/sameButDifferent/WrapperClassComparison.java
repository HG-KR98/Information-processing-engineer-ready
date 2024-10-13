package sameButDifferent;

public class WrapperClassComparison {
    public static void main(String[] args) {
        Integer num1 = 128;
        Integer num2 = 128;

        //Integer num3 = new Integer(128); 이 방법보다는
        Integer num3 = Integer.valueOf(128); // 이 방법이 더 권장 되는데 그 이유는 성능 문제 때문이며 Java 9부터 더 이상 사용되지 않기를 권장한다는 것이다.
        // valueOf는 동일한 값을 갖는 Integer 객체를 캐싱할 수 있기 때문에 메모리 공간 절약과 속도 개선에 유리하다.

        System.out.println("num1 == num2: " + (num1 == num2));
        System.out.println("num1 == num3: " + (num1 == num3));
        System.out.println("num1.equals(num2): " + num1.equals(num2));
        System.out.println("num1.equals(num3): " + num1.equals(num3));

        Integer num4 = 127;
        Integer num5 = 127;

        System.out.println("num4 == num5: " + (num4 == num5));
        System.out.println("num4.equals(num5): " + num4.equals(num5));

        // 숫자로 넣은 것이 아니라 Integer로 생성한 객체는 약간 다르다.
        // Java에서 정수는 -128부터 127의 범위를 캐싱한다. 이 범위가 들어왔을 때는 똑같은 것이 있으면 다시 사용한다.
        // 이 범위가 들어왔을 때는 똑같은 것이 있으면 다시 사용한다.
        // 128은 캐싱 범위를 넘기 때문에 비교하면 false가 나온다. (범위 내의 숫자를 == 으로 하면 true)

        //.equals로 하는 경우에는 내용만 보기에 전부 같다.
    }
}
