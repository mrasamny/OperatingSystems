import java.util.concurrent.*;

public class Driver
{
    public static void main(String[] args) {
        Thread worker = new Thread(new Task());
        worker.start();
    }
}
