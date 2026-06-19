package aula25;
public class Ave extends Animal {
    
    protected String corPena;

    public void fazerNinho(){
        System.out.println("Construindo Ninho.");
    }
    
    @Override
    public void locomover() {
        System.out.println("Voando.");   
    }

    @Override
    public void alimentar() {
        System.out.println("Comendo Frutas.");
    }

    @Override
    public void emitirSom() {
        System.out.println("Emitindo Som - Ave.");
    }

    public String getCorPena() {
        return corPena;
    }

    public void setCorPena(String corPena) {
        this.corPena = corPena;
    }
    
    
}
