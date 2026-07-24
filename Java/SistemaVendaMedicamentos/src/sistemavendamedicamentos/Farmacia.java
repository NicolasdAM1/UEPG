package sistemavendamedicamentos;
public class Farmacia {
    
    private Medicamento[] carrinho;
    private int quantidade;

    public Farmacia(int capacidade) {
        this.carrinho = new Medicamento[capacidade];
        this.quantidade = 0;
    }

    public void adicionarMedicamento(Medicamento m) {
        if (quantidade < carrinho.length) {
            carrinho[quantidade] = m;
            quantidade++;
        } else {
            System.out.println("O carrinho está cheio.");
        }
    }

    public void retornarValor() {
        float total = 0;
        float totalDescontado = 0;

        System.out.println("=================== NOTA FISCAL ===================");
        
        for (int i = 0; i < quantidade; i++) {
            Medicamento m = carrinho[i];
            
            total += m.getValor();
            totalDescontado += m.getValorDescontado();

            
            System.out.printf(m.toString() + " - R$%.2f | Descontado: R$%.2f\n", m.getValor(), m.getValorDescontado());
        }

        System.out.print("********************************************************");
        System.out.printf("\nVALOR TOTAL SEM DESCONTO: R$%.2f", total);
        System.out.printf("\nVALOR TOTAL COM DESCONTO: R$%.2f\n", totalDescontado);
        System.out.println("********************************************************");
    }

    
}
