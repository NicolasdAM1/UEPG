package aula25;
public class Peixe extends Animal {
    
    protected String corEscama;

    public void soltarBolha(){
        System.out.println("Soltando Bolha.");
    }
    
    @Override
    public void locomover() {
        System.out.println("Nadando.");
    }

    @Override
    public void alimentar() {
        System.out.println("Comendo Substâncias.");
    }

    @Override
    public void emitirSom() {
        System.out.println("BLOP.");
    }

    public String getCorEscama() {
        return corEscama;
    }

    public void setCorEscama(String corEscama) {
        this.corEscama = corEscama;
    }
    
    
}
