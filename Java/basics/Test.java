public class Test {
    public static void main(String[] args) {
        Hero hero = new Hero();
        System.out.println(hero.name);
        System.out.println(Hero.age);
    }
}

class Hero{
    String name;
    static int age;
}
