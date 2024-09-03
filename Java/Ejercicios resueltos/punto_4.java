import java.util.Scanner;

public class punto_4 {
	
	public static void main(String[] args) {
		try (Scanner sc = new Scanner(System.in)) {
			System.out.println("Ingrrese su nombre:");
			String nombre = sc.nextLine();
			System.out.println("Bienvenido "+(nombre));
		}
	}
}
