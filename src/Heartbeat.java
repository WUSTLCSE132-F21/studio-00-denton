
public class Heartbeat {

	public static void main(String[] args) {
		int time = 0;
		while (true) {
			System.out.println(time + " sec have elapsed.");
			try {
				Thread.sleep(1000);
				time++;
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

}
