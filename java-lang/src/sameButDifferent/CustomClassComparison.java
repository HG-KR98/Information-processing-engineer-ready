package sameButDifferent;

public class CustomClassComparison {
    public static void main(String[] args) {
        Person person1 = new Person("John", 25);
        Person person2 = new Person("John", 25);
        Person person3 = new Person("Jane", 23);

        System.out.println("person1 == person2: " + (person1 == person2));
        System.out.println("person1.equals(person2): " + person1.equals(person2));
        System.out.println("person1.equals(person2): " + person1.equals(person3));
    }
}
