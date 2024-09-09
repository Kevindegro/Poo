import java.util.Scanner;

public class punto_9 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Ingrece un precio");
		float valor = sc.nextInt();
		System.out.println("El precio con IVA es de: "+(valor*1.21));
	}
}
