<?php

class Caneta {

    var $modelo;
    var $cor;
    var $ponta;
    var $carga;
    var $tampada;
    
    function rabiscar(){
        if ($this->tampada == true) {
            echo "<p>Destampe a Caneta para Rabiscar.";
        } else {
            echo "<p>Rabiscos...</p>";
        }
    }
    
    function tampar(){
        $this->tampada = true;
    }
    
    function destampar(){
        $this->tampada = false;
    }
}
