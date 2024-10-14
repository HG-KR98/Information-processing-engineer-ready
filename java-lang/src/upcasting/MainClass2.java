//package upcasting;
//
//public class MainClass2 {
//    public static void main(String[] args) {
//        A b = new B(1);
//        b.paint();
//        b.draw();
//        b.specialDraw();
//    }
//}
//
//class A1 {
//    public A1() {
//        System.out.println("생성자 of A");
//    }
//
//    public A1(int i) {
//        System.out.println("생성자 of AA" + i);
//    }
//
//    public void paint() {
//        System.out.println("A");
//        draw();
//    }
//
//    public void draw() {
//        System.out.println("B");
//        draw();
//    }
//}
//
//class B extends A1 {
//    public B() {
//        super.paint();
//    }
//
//    public B(int i) {
//        super(10);
//        System.out.println("생성자 BB" + i);
//    }
//
//    public void paint() {
//        System.out.println("C");
//    }
//
//    public void specialDraw() {
//        System.out.println("D");
//    }
//
//    public void specialDraw() {
//        System.out.println("D");
//    }
//}

// 무조건 오류. 부모도 함께 가지고 있는 메서드를 사용해야함.
