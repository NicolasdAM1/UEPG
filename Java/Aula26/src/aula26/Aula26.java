package aula26;
public class Aula26 {
    public static void main(String[] args) {
        
        Lobo lobo = new Lobo();
        Cachorro c = new Cachorro();
        
        lobo.emitirSom();
        c.emitirSom();
        
        c.reagir("Olá");
        c.reagir("Vai Apanhar");
        c.reagir(11, 45);
        c.reagir(21, 00);
        c.reagir(true);
        c.reagir(false);
        c.reagir(2, 12.5f);
        c.reagir(17, 4.5f);
        
    }
    
}
