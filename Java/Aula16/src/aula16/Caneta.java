
package aula16;


public class Caneta {
    String modelo;
    String cor;
    float ponta;
    int carga;
    boolean tampada;
    void status(){
        System.out.println("Modelo: " + this.modelo);
        System.out.println("Ponta: " + this.ponta);
        System.out.println("Uma caneta " + this.cor);
        System.out.println("Carga: " + this.carga);
        System.out.println("Está tampada ? " + this.tampada);
    }
    
    void rabiscar(){
        if(tampada == true){
            System.out.println("Erro. Rabisco impossível nestas condições");
        } else {
            System.out.println("Rabisco.");
        }
    }
    
    void tampar(){
        this.tampada = true;
    }
    
    void destampar(){
        this.tampada = false;
    }
}

