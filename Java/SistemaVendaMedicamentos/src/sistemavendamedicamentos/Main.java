package sistemavendamedicamentos;
public class Main {
    public static void main(String[] args) {
        MedicamentoGenerico g[] = new MedicamentoGenerico[3];
        MedicamentoMarca m[] = new MedicamentoMarca[2];
        
        Farmacia f = new Farmacia(5);
        
        g[0] = new MedicamentoGenerico("Amoxicilina", 27.46f);
        g[1] = new MedicamentoGenerico("Dipirona monoidratada", 9.9f);
        g[2] = new MedicamentoGenerico("Paracetamol", 7.86f);
        m[0] = new MedicamentoMarca("Aspirina", 18.99f, "Bayer");
        m[1] = new MedicamentoMarca("Viagra", 136.39f, "Pfizer");


        f.adicionarMedicamento(g[0]);
        f.adicionarMedicamento(m[0]);
        f.adicionarMedicamento(g[1]);
        f.adicionarMedicamento(g[2]);
        f.adicionarMedicamento(m[1]);
        
        f.retornarValor();
    }
    
}
