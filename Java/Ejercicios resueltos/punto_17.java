import java.util.Scanner;

public class punto_17 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Ingrese un día de la semana (ejemplo: lunes): ");
        String dia = input.nextLine().toLowerCase();

        switch (dia) {
            case "lunes":
            case "martes":
            case "miércoles":
            case "jueves":
            case "viernes":
                System.out.println("Es un día laboral.");
                break;
            case "sábado":
            case "domingo":
                System.out.println("No es un día laboral.");
                break;
            default:
                System.out.println("Día no válido.");
                break;
        }
        input.close();
    }
}
