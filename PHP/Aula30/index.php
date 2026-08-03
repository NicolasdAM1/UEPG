
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
            require_once 'Caneta.php';
            $c1 = new Caneta("BiC", "Preta", 0.5);
            $c2 = new Caneta("Faber-Castell", "Azul", 0.3);
            print "Caneta {$c1->getModelo()} com ponta: {$c1->getPonta()}\n";
            print_r($c1);
            print "\nCaneta {$c2->getModelo()} com ponta: {$c2->getPonta()}\n";
            print_r($c2);
            
            $c1->destampar();
            $c1->rabiscar();
            
        ?>
    </body>
</html>
