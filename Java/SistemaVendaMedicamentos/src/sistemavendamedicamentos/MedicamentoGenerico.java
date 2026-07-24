package sistemavendamedicamentos;
public final class MedicamentoGenerico extends Medicamento{
    
    public MedicamentoGenerico(String nome, float valor) {
        super(nome, valor);
    }
    
    @Override
    public float getValorDescontado() {
        return (float) (this.getValor() * 0.8);   
    }

    @Override
    public String toString() {
        return super.toString() + " (G)";
    }
    
}
