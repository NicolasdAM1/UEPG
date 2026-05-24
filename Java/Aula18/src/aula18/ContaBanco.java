package aula18;
public class ContaBanco {
    private int numConta;
    private String tipo;
    private String dono;
    private float saldo;
    private boolean status;

    public int getNumConta() {
        return numConta;
    }

    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public boolean isStatus() {
        return status;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }

    
    
    public ContaBanco(int numConta, String tipo, String dono, float saldo, boolean status) {
        this.numConta = numConta;
        this.tipo = tipo;
        this.dono = dono;
        this.saldo = 0;
        this.status = false;
    }
    public ContaBanco(){
        this.saldo = 0;
        this.status = false;
    }
    
    public void abrirConta(String tipo){
        if (tipo.equals("CC")){
            this.setSaldo(50);
        } else if (tipo.equals("CP")){
            this.setSaldo(150);
        }
        this.setTipo(tipo);
        this.setStatus(true);
    }
    
    public void fecharConta(){
        if (this.getSaldo() != 0){
            System.out.println("Retire TODO o Saldo para Finalizar a Conta");
            return;
        }
        this.setStatus(false);
    }
 
    public void depositar(float deposito){
        if (this.status == false){
            System.out.println("A Conta foi Encerrada. Não é possível depositar.");
            return;
        }
        float var = this.getSaldo() + deposito;
        this.setSaldo(var);
    }
    
    public void sacar(float saque){
        if (this.status == false){
            System.out.println("A Conta foi Encerrada. Não há dinheiro nem é possível sacar.");
            return;
        }
        if (this.getSaldo() < saque){
            System.out.println("Saque maior que Saldo. Saque Indisponível.");
            return;
        }
        float var = this.getSaldo() - saque;
        this.setSaldo(var);
    }
    
    public void pagarMensalidade(){
        if (this.isStatus() == false){
            System.out.println("Conta Encerrada. Nenhuma mensalidade será cobrada.");
            return;
        }
        if (this.getTipo().equals("CC")){
            if (getSaldo() < 12){
                System.out.println("Não é possível debitar a mensalidade da Conta Corrente.");
                return;
            }
            float var = getSaldo() - 12f;
            setSaldo(var);
            System.out.println("Mensalidade da Conta Corrente debitada.");
            return;
        }
        if (this.getTipo().equals("CP")){
            if (getSaldo() < 20){
                System.out.println("Não é possível debitar a mensalidade da Conta Poupança");
                return;
            }
            float var = getSaldo() - 20f;
            setSaldo(var);
            System.out.println("Mensalidade da Conta Poupança debitada.");
            return;
        }
    }
    
    public void estadoAtual(){
        System.out.println("==============================================");
        System.out.println("Número da Conta: " + this.getNumConta());
        System.out.println("Status: " + this.isStatus());
        System.out.println("Tipo da Conta: " + this.getTipo());
        System.out.println("Titular: " + this.getDono());
        System.out.println("Saldo: " + this.getSaldo());
        System.out.println("----------------------------------------------");
    }
}
