/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula04;

import java.util.Date;
import java.awt.Toolkit;
import java.awt.Dimension;
import java.util.Locale;

/**
 *
 * @author Nicolas
 */
public class Aula04 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Olá, Mundo JAVA !");
        
        Date relogio = new Date();
        System.out.println("A hora do sistema é: ");
        System.out.println(relogio.toString());
        
        Toolkit tk = Toolkit.getDefaultToolkit();
        Dimension d = tk.getScreenSize();
        System.out.println("A resolução do monitor é: " + d.width + "x" + d.height);
        
        Locale idioma = Locale.getDefault();
        System.out.println("O idioma do sistema está em: " + idioma.getDisplayLanguage());
    }
    
}
