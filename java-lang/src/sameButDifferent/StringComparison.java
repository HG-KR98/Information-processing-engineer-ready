package sameButDifferent;

public class StringComparison {
    public static void main(String[] args) {

        String str1 = "Hello";
        String str2 = "Hello";
        String str3 = new String("Hello");

        System.out.println("str1 == str2: " + (str1 == str2)); // true
        System.out.println("str2 == str3: " + (str2 == str3)); // false
        System.out.println("str1 == str3: " + (str1 == str3)); // false
        System.out.println("str1.equals(str2): " + str1.equals(str2)); // true
        System.out.println("str2.equals(str3): " + str2.equals(str3)); // true


        // Java에서 ""로 만들어진 문자열은 내용이 같으면, 문자열 풀이라는 곳에 저장된다.
        // 이것을 문자열 리터럴 방식이라고 하는데, 리터럴 방식이 여러번 사용되면 동일한 객체를 참조한다.
        // 하지만, new로 생성되는 경우 다른 곳에 저장된다. (heap)
        // 동일한 값이어도 다른 객체를 참조하기 때문에 다르게 나온다.
    }
}
