import java.util.concurrent.*;

public class Task implements Runnable {
    public void run() {
        System.out.println("I am a thread!");
    }
}
