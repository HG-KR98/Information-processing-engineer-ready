package extend;

public class AnimalMain {
    public static void main(String[] args) {
        // Dog 객체 생성
        Dog dog = new Dog();
        dog.name = "Buddy";
        dog.age = 3;

        // 상속받은 메서드 호출
        dog.eat(); // Buddy is eating.
        dog.sleep(); // Buddy is sleeping.

        // 자식 클래스의 메서드 호출
        dog.bark(); // Buddy is barking.
    }
}
