import java.util.Scanner;

public class punto_7 {
		public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			System.out.println("Ingrese un numero");
			int num = sc.nextInt();
			char ASCII = (char) num;
			
			System.out.println("Valor del numero:"+(num));
			System.out.println("Valor en ASCII: "+(ASCII));
		}

}
