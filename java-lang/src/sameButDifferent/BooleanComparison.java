package sameButDifferent;

public class BooleanComparison {
    public static void main(String[] args) {
        Boolean b1 = Boolean.TRUE;
        Boolean b2 = Boolean.TRUE;
        Boolean b3 = Boolean.valueOf(true);
        Boolean b4 = Boolean.valueOf(true);

        System.out.println("b1 == b2: " + (b1 == b2)); // true
        System.out.println("b1 == b3: " + (b1 == b3)); // false
        System.out.println("b1.equals(b3): " + b1.equals(b3)); // true
        System.out.println("b1 == b4: " + (b1 == b4)); // true
        System.out.println("b1.equals(b4): " + b1.equals(b4)); // true

        // new로 생성한 것은 아예 다른 객체다. ==는 false가 나온다.
        // Boolean.TRUE로 넣은 것은 == 도 true다.
        // 이 경우는 단순하게 암기하는 것이 편하다.
    }
}
