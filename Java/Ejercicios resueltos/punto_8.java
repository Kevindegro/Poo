import java.util.Scanner;

public class punto_8 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Ingrese una letra");
		char letra = sc.next().charAt(0);
		int ASCII = (int) letra;
		
		System.out.println("Valor del char:"+(letra));
		System.out.println("Valor en ASCII: "+(ASCII));
		
		sc.close();
	}
	
}
