/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula15;

/**
 *
 * @author Nicolas
 */
public class Fatorial {
    
    private int N = 0;
    private int F = 1;
    private String FORM = "";
    
    public void setValor(int n){
        N = n;
        int f = 1;
        String s = "";
        for(int i = n; i > 1; i--){
            f *= i;
            s += i + " x ";
        }
        s += "1 = ";
        F = f;
        FORM = s;
    }
    
    public int getFatorial(){
        return F;
    }
    
    public String getFormula(){
        return FORM;
    }
}
