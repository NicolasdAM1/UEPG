/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula12;

import javax.swing.JOptionPane;
/**
 *
 * @author Nicolas
 */
public class Aula12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int n, g = 0, p = 0, i = 0;
        float m, s = 0, c = 0;
        do{
            String input = JOptionPane.showInputDialog(null, 
                    "<html>Informe um número inteiro: <br><em>(Insira 0 para finalizar)</em></html>");
            if (input == null) break; 
            
            n = Integer.parseInt(input);

            if (n != 0) {
                s += n;
                c++;
                if (n % 2 == 0) {
                    p++;
                } else {
                    i++;
                }
                if (n > 100) {
                    g++;
                }
            }
        } while (n != 0);
        m = (c > 0) ? s / c : 0;
        JOptionPane.showMessageDialog(null, 
                "<html><strong>Resultado Final</strong><hr>"
                + "Total de Valores: " + (int)c + "<br>"
                + "Total de Pares: " + p + "<br>"
                + "Total de Ímpares: " + i + "<br>"
                + "Acima de 100: " + g + "<br>"
                + "Média dos Valores: " + m + "</html>",
                "Resultado Final",
                JOptionPane.WARNING_MESSAGE);
    }
    
}
