<?php

class Caneta {

    public $modelo;
    public $cor;
    private $ponta;
    protected $carga;
    protected $tampada;
    
    public function getModelo() {
        return $this->modelo;
    }

    public function getPonta() {
        return $this->ponta;
    }

    public function setModelo($modelo) {
        $this->modelo = $modelo;
    }

    public function setPonta($ponta) {
        $this->ponta = $ponta;
    }

    public function __construct($modelo, $cor, $ponta) {
        $this->modelo = $modelo;
        $this->cor = $cor;
        $this->ponta = $ponta;
        $this->tampar();
    }

        public function rabiscar(){
        if ($this->tampada == true) {
            echo "<p>Destampe a Caneta para Rabiscar.";
        } else {
            echo "<p>Rabiscos...</p>";
        }
    }
    
    public function tampar(){
        $this->tampada = true;
    }
    
    public function destampar(){
        $this->tampada = false;
    }
}