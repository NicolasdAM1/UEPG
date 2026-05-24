public class ControleRemoto implements Controlador{
    
    private int volume;
    private boolean ligado;
    private boolean passando;
    private boolean menu;
    private boolean mutado;

    public ControleRemoto() {
        this.volume = 10;
        this.ligado = false;
        this.passando = false;
        this.menu = false;
        this.mutado = false;
    }

    public int getVolume() {
        return volume;
    }

    private void setVolume(int volume) {
        this.volume = volume;
    }

    public boolean isLigado() {
        return ligado;
    }

    private void setLigado(boolean ligado) {
        this.ligado = ligado;
    }

    public boolean isPassando() {
        return passando;
    }

    private void setPassando(boolean passando) {
        this.passando = passando;
    }

    public boolean isMenu() {
        return menu;
    }

    public void setMenu(boolean menu) {
        this.menu = menu;
    }

    public boolean isMutado() {
        return mutado;
    }

    public void setMutado(boolean mutado) {
        this.mutado = mutado;
    }
    
    

    @Override
    public void ligar() {
        this.setLigado(true);
    }

    @Override
    public void desligar() {
        this.setLigado(false);
    }

    @Override
    public void abrirMenu() {
        if (this.isLigado() == false){
            System.out.println("...");
            return;
        }
        System.out.println("======== MENU ========");
        System.out.println("Ligado: " + this.isLigado());
        System.out.println("Passando: " + this.isPassando());
        System.out.println("Volume: " + getVolume());
        for (int i = 0; i <= this.getVolume(); i++){
            System.out.print("|");
        }
        System.out.println("----------------------");
        this.setMenu(true);
    }

    @Override
    public void fecharMenu() {
        System.out.println("Fechando Menu...");
        this.setMenu(false);
    }

    @Override
    public void aumentarVolume() {
        if (this.isLigado() == false){
            System.out.println("...");
            return;
        }
        if (getVolume() == 30){
            System.out.println("Volume já está no Máximo.");
            return;
        }
        this.setVolume(this.getVolume() + 1);
    }

    @Override
    public void diminuirVolume() {
        if (this.isLigado() == false){
            System.out.println("...");
            return;
        }
        if (this.getVolume() == 0){
            System.out.println("Sem Som");
            return;
        }
        this.setVolume(this.getVolume() - 1);
    }

    @Override
    public void mutar() {
        if (this.isLigado() && getVolume() > 0){
            setVolume(0);
            setMutado(true);
        }
    }

    @Override
    public void desmutar() {
        if (this.isLigado() && getVolume() == 0){
            setVolume(10);
            setMutado(false);
        }
    }

    @Override
    public void play() {
        if (this.isLigado() && !(this.isPassando()))
            this.setPassando(true);
    }

    @Override
    public void pause() {
        if (this.isLigado() && this.isPassando()){
            this.setPassando(false);
        }
    }
    
}
