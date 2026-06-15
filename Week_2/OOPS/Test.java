interface Playable {
    void play();
}

class Veena implements Playable {

    public void play() {
        System.out.println("Veena is playing");
    }
}

class Saxophone implements Playable {

    public void play() {
        System.out.println("Saxophone is playing");
    }
}

public class Test {

    public static void main(String[] args) {

        System.out.println("Playing Veena");

        Veena veena = new Veena();
        veena.play();

        System.out.println();

        System.out.println("Playing Saxophone");

        Saxophone saxophone = new Saxophone();
        saxophone.play();
    }
}