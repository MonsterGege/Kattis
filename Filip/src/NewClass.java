import java.util.*;
public class NewClass{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String num1 = new String(new StringBuilder(in.next()).reverse());
        String num2 = new String(new StringBuilder(in.next()).reverse());
        
        int a = Integer.parseInt(num1);
        int b = Integer.parseInt(num2);
        
        System.out.println(a > b ? a : b);
        
        
}
}