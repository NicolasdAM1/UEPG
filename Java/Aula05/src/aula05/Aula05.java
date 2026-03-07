/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula05;

import java.util.Date;
import java.awt.Toolkit;
import java.awt.Dimension;
import java.util.Locale;
import java.awt.GridLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
import javax.swing.ImageIcon;
import javax.swing.JPanel;

/**
 *
 * @author Nicolas
 */
public class Aula05 {

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
        
        JFrame janela = new JFrame("Informações do Sistema");
        janela.setSize(400, 250);
        janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        janela.setLayout(new GridLayout(3, 1));
        
        JLabel lblTitulo = new JLabel("Olá, Mundo Java (agora em Swing) !", SwingConstants.CENTER);
        JLabel lblHora = new JLabel("Hora: " + relogio.toString(), SwingConstants.CENTER);
        JLabel lblResolucao = new JLabel("Resolução: " + d.width + "x" + d.height, SwingConstants.CENTER);
        JLabel lblIdioma = new JLabel("Idioma: " + idioma.getDisplayLanguage(), SwingConstants.CENTER);
        
        ImageIcon icone = new ImageIcon(Aula05.class.getResource("/Resource/logo.png"));
        JLabel lblImagem = new JLabel(icone, SwingConstants.CENTER);
        
        JPanel painelDados = new JPanel(new GridLayout(2, 2));
        
        janela.add(lblImagem);
        janela.add(painelDados);
        painelDados.add(lblTitulo);
        painelDados.add(lblHora);
        painelDados.add(lblResolucao);
        painelDados.add(lblIdioma);
        
        janela.setLocationRelativeTo(null);
        janela.setVisible(true);
     
    }
}
