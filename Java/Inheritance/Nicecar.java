public class Nicecar {
    private Engine engine;

    public Nicecar(Engine engine) {
        this.engine = engine;
    }

    public void start() {
        engine.start();
    }
}
