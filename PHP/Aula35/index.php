<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
    
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #eef2f5;
            color: #333333;
            margin: 0;
            padding: 40px 20px;
        }

        .container {
            max-width: 850px;
            margin: 0 auto;
            background-color: #ffffff;
            border-radius: 12px;
            box-shadow: 0 8px 24px rgba(0, 0, 0, 0.08);
            padding: 35px 45px;
        }

        h1 {
            text-align: center;
            color: #1a252f;
            margin-bottom: 30px;
            font-size: 26px;
            border-bottom: 2px solid #e2e8f0;
            padding-bottom: 12px;
        }

        h2 {
            color: #2c3e50;
            font-size: 20px;
            margin-top: 30px;
            margin-bottom: 15px;
            display: flex;
            align-items: center;
        }

        h2::before {
            content: "•";
            color: #3498db;
            font-size: 28px;
            margin-right: 10px;
        }

        ul {
            list-style-type: none;
            padding-left: 0;
            margin: 0;
        }

        li {
            background-color: #f8fafc;
            border: 1px solid #e2e8f0;
            padding: 14px 18px;
            margin-bottom: 10px;
            border-radius: 8px;
            font-size: 15px;
            line-height: 1.6;
            transition: all 0.2s ease-in-out;
        }

        li:hover {
            transform: translateX(4px);
            box-shadow: 0 4px 12px rgba(0, 0, 0, 0.05);
        }

        .lista-leitores li {
            border-left: 4px solid #2ecc71;
        }

        .lista-livros li {
            border-left: 4px solid #e67e22;
        }

        strong {
            color: #1a252f;
        }
    </style>
</head>
<body>

    <div class="container">
        <h1>Exercício Prático em PHP</h1>

        <?php
            require_once 'Pessoa.php';
            require_once 'Livro.php';

            $p = array();
            $p[0] = new Pessoa("Pedro dos Santos", 22, "M");
            $p[1] = new Pessoa("Maria do Carmo", 31, "F");
            $p[2] = new Pessoa("Roberto de Oliveira", 30, "M");
            $p[3] = new Pessoa("Ana Clara Ribas", 29, "F");

            $l = array();
            $l[0] = new Livro("PHP Básico", "José da Silva", 300, $p[0]);
            $l[1] = new Livro("POO com PHP", "Maria de Souza", 500, $p[1]);
            $l[2] = new Livro("PHP Avançado", "Ana Paula Lemos", 800, $p[2]);
            $l[3] = new Livro("Biblia do PHP", "Roberto Carlos de Lima", 1100, $p[3]);

            $l[0]->abrir();
            $l[0]->folhear(100);

            $l[1]->abrir();
            $l[1]->folhear(250);

            $l[2]->abrir();
            $l[2]->folhear(620);

            $l[3]->abrir();
            $l[3]->folhear(450);
        ?>

        <h2>Lista de Leitores</h2>
        <ul class="lista-leitores">
            <?php foreach ($p as $pessoa): ?>
                <li><?php echo $pessoa->getNome(); ?></li>
            <?php endforeach; ?>
        </ul>

        <h2>Lista de Livros emprestados</h2>
        <ul class="lista-livros">
            <?php foreach ($l as $livro): ?>
                <li><?php echo $livro->detalhes(); ?></li>
            <?php endforeach; ?>
        </ul>
    </div>

</body>
</html>