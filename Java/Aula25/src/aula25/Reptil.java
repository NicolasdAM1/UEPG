package aula25;
public class Reptil extends Animal {
    
    protected String corEscama;

    @Override
    public void locomover() {
        System.out.println("Rastejando-se.");
    }

    @Override
    public void alimentar() {
        System.out.println("Comendo Vegetais.");
    }

    @Override
    public void emitirSom() {
        System.out.println("Emitindo Som - Réptil.");
    }

    public String getCorEscama() {
        return corEscama;
    }

    public void setCorEscama(String corEscama) {
        this.corEscama = corEscama;
    }
 
    
}
