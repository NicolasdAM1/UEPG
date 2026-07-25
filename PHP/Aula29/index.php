<!DOCTYPE html>

<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
            require_once 'Caneta.php';
            $c1 = new Caneta;
            $c1->modelo = "BiC";
            $c1->cor = "Preta";
            $c1->ponta = 0.5;
            $c1->carga = 100;
            $c1->tampada = true;
            print_r($c1);
            
            $c1->destampar();
            $c1->rabiscar();
            
            var_dump($c1);
        ?>
    </body>
</html>
