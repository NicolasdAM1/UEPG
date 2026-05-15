package aula16;


public class Aula16 {


    public static void main(String[] args) {
        Caneta c1 = new Caneta();
        c1.cor = "Azul";
        c1.modelo = "BIC";
        c1.ponta = 0.5f;
        c1.carga = 1;
        c1.tampada = false;
        c1.status();
        c1.tampar();
        c1.rabiscar();
        c1.destampar();
        c1.rabiscar();
        
        Caneta c2 = new Caneta();
        c2.cor = "Preta";
        c2.modelo = "Faber-Castell";
        c2.ponta = 0.3f;
        c2.carga = 2;
        c2.tampada = true;
        c2.status();
        c2.destampar();
        c2.rabiscar();
    }
    
}
