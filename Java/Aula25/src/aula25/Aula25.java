package aula25;
public class Aula25 {
    public static void main(String[] args) {
        
        Mamifero m = new Mamifero();
        Reptil r = new Reptil();
        Peixe p = new Peixe();
        Ave a = new Ave();
        
        Canguru c = new Canguru();
        Cachorro cao = new Cachorro();
        Cobra s = new Cobra();
        Tartaruga t = new Tartaruga();
        Goldfish g = new Goldfish();
        Arara ar = new Arara();
        
        cao.locomover();
        c.locomover();
        s.emitirSom();
        t.locomover();
        g.locomover();
        ar.locomover();
        
        c.usarBolsa();
        cao.emitirSom();
        
    }
    
}
