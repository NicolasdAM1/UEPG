package sistemavendamedicamentos;
public final class MedicamentoMarca extends Medicamento {
 
    private String marca;

    public MedicamentoMarca(String nome, float valor, String marca) {
        super(nome, valor);
        this.marca = marca;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    @Override
    public float getValorDescontado() {
        return (float) (this.getValor() * 0.9);
    }

    @Override
    public String toString() {
        return super.toString()
                + " (" + marca + ")";
    }
    
}
