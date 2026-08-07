<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
            require_once 'ControleRemoto.php';

            $c = new ControleRemoto();
            
            $c->ligar();
            $c->maisVolume();
            $c->play();
            $c->abrirMenu();
        ?>
        </pre>
    </body>
</html>