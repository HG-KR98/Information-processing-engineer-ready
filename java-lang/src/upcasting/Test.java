package upcasting;

public class Test {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        Animal myCat = new Cat();

        myDog.sound();
        myCat.sound();
    }
}
