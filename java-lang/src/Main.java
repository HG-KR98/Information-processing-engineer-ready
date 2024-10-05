public class Main {
    public static void main(String[] args) {
        String str = "hello";

        int len = str.length();

        switch (len) {
            case 3:
                len += 2;
            case 4:
                len *= 2;
            case 5:
                len -= 1;
            case 6:
                len += 3;
                break;
            case 7:
                len -= 2;
            case 8:
                len /= 2;
        }
        // break 문이 없으면 아래로 내려 간다.
        System.out.println(len);
    }
}