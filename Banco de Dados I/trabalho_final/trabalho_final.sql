create database loja_Moveis;

Criar a modelagem (modelo relacional);
Criar as tabelas que julgar necessárias para a construção da base de dados da empresa;


create table produto (
    codigo int NOT NULL AUTO_INCREMENT,
    descricao varchar(50) NOT NULL,
    preco DECIMAL(6,2) NOT NULL,
    PRIMARY KEY (codigo)
);

create table funcionarios (
    codigo int NOT NULL AUTO_INCREMENT,
    nome_funcionario varchar(50) NOT NULL,
    telefone varchar(12),
    endereco varchar(255) NOT NULL,
    salario DECIMAL(6,2),
    PRIMARY KEY (codigo)
);

create table clientes (
    codigo int NOT NULL AUTO_INCREMENT,
    nome_cliente varchar(50) NOT NULL,
    telefone varchar(12),
    endereco varchar(255) NOT NULL,
    PRIMARY KEY (codigo)
);

create table pedidos (
    codigo int NOT NULL AUTO_INCREMENT,
    codigo_produto int NOT NULL,
    codigo_funcionario int NOT NULL,
    codigo_cliente int NOT NULL,
    valor DECIMAL(6,2) NOT NULL,
    observacao varchar(255) NOT NULL,
    PRIMARY KEY (codigo),
    constraint fk_codproduto foreign key (codigo_produto) references produto (codigo),
    constraint fk_clientes foreign key (codigo_cliente) references clientes (codigo),
    constraint fk_funcionarios foreign key (codigo_funcionario) references funcionarios (codigo)
);

create table estoque (
    codigo_estoque int not null auto_increment,
    quantidade int null,
    codigo_produto int NOT NULL,
    PRIMARY KEY (codigo_estoque),
    constraint fk_produtofk foreign key (codigo_produto) references produto (codigo)
);

----------------------------------------------------------------------------------------------------

Insira a quantidade de dados necessários para cada tabela (no mínimo 5 linhas para cada tabela);

insert into moveis (nome) values 
('Banheiro'), ('Cozinha'), ('Quarto'), ('Sala'), ('Garagem');

insert into tipo (codigo_moveis, descricao, preco) values 
('1', 'Chuveiro', 120.00),
('1', 'Box', 50.00),
('2', 'Mesa', 520.00),
('3', 'Cama', 870.00),
('3', 'Colchão', 200.00),
('4', 'Sofá', 300.00),
('4', 'TV', 2000.00),
('5', 'Balcão', 510.00),
('5', 'Prateleira', 230.00),
('1', 'Pia', 450.00),
('5', 'Porta', 200.00),
('2', 'Fogão', 350.00);

insert into funcionarios (nome_funcionario, sobrenome, telefone, endereco, documento, salario) values 
('Rui Costa', 'Porto', '054999111122', 'Rua Pedro Luiz', '00011122201', '1800.90'),
('Pedro Bala', 'Areia', '051999222121', 'Rua Porto Alegre', '11111234511', '1780.00'),
('Edenilson', 'Penal', '054996000111', 'Rua da Pipoca', '00088888888', '4000.00'),
('Cleusa', 'Brasil', '055996111222', 'Rua Brasil', '01231231230', '2200.50'),
('Cenair', 'Peixe', '054991999222', 'Rua Indio', '22211111111', '1600.78');

insert into clientes (nome_cliente, sobrenome ,telefone, estado_civil, endereco, documento) values 
('Everson', 'Cam', '054999444123', 'Solteiro', 'Rua Facada', '02002012302'),
('Ana', 'Laranja', '054999456987', 'Solteira', 'Rua Sertão', '09008007012'),
('Bruce Wayne', 'Bat', '051998789000', 'Solteiro', 'Rua Morcego', '34356700009'),
('Wesley', 'Kaiser', '055999434434', 'Casado', 'Rua das Chuvas', '54556500009'),
('Andre Tamandua', 'Andrada', '054996777111', 'Casado', 'Rua Das Dores', '00023331112');

insert into pedidos (codigo_produto, codigo_funcionario, codigo_cliente, valor, observacao) values
('2', '3', '1', '50.00', 'Box Banheiro'),
('5', '2', '4', '870.00', 'Colchão Solteiro'),
('12', '4', '3', '350.00', 'Fogão 6 bocas'),
('12', '4', '4', '350.00', 'Fogão 6 bocas'),
('8', '2', '5', '510.00', 'Balcão'),
('7', '1', '2', '2000.00', 'TV 40p Polegadas'),
('1', '5', '2', '120.00', 'Chuveiro');

insert into estoque (quantidade, codigo_produto) values 
('14', '1'),
('32', '2'),
('21', '3'),
('24', '4'),
('27', '5'),
('38', '6'),
('45', '7'),
('36', '8'),
('21', '9'),
('19', '10'),
('10', '11'),
('14', '12');

-------------------------------------------------------------------------------------------------------------

Crie os comandos para apagar as tabelas inteiramente se necessário;
DROP TABLE pedidos;
DROP TABLE estoque;
DROP TABLE tipo;
DROP TABLE moveis;
DROP TABLE clientes;
DROP TABLE funcionarios;

Crie um comando para cada tabela para selecionar todos os dados;
SELECT * FROM clientes;
SELECT * FROM funcionarios;
SELECT * FROM moveis;
SELECT * FROM pedidos;
SELECT * FROM tipo;
SELECT * FROM estoque;

------------------------------------------------------------------------------------------------------------

1) Dê exemplo de um comando utilizando subconsultas que utilize o operador = ou <,>, <= etc.

SELECT nome_funcionario, salario FROM funcionarios WHERE salario < 2100;
SELECT nome_funcionario, salario FROM funcionarios WHERE salario > 1550;
SELECT nome_funcionario, salario FROM funcionarios WHERE salario <= 1890;
SELECT nome_funcionario, salario FROM funcionarios WHERE salario >= 1200;
SELECT nome_funcionario, salario FROM funcionarios WHERE salario = 4000;

2) Dê exemplo de um comando utilizando subconsultas (subqueries) que utilize o operador in.

SELECT codigo_moveis, descricao, preco FROM tipo WHERE codigo_moveis IN (2,5);

3) Dê exemplo de um comando utilizando subconsultas que utilize o operador not in.

SELECT codigo_moveis, descricao, preco FROM tipo WHERE codigo_moveis not IN (1, 5);

4) Dê exemplo de um comando utilizando subconsultas que utilize o operador exists.

SELECT codigo_estoque, quantidade
FROM estoque
WHERE EXISTS (SELECT nome FROM moveis WHERE moveis.codigo = estoque.codigo_produto AND quantidade < 30);

5) Dê exemplo de um comando utilizando subconsultas que utilize o operador not exists.

SELECT codigo_estoque, quantidade
FROM estoque
WHERE NOT EXISTS 
(SELECT nome FROM moveis WHERE moveis.codigo = estoque.codigo_produto AND quantidade < 30);

6) Dê exemplo de uma subconsulta utilizada dentro de um comando Update.

update tipo set preco = preco + (preco*0.1) where codigo_moveis = 
(select codigo from moveis where nome = 'Banheiro');
select * from tipo;

7) Dê exemplo de uma subconsulta utilizada dentro de um comando Delete.

delete from tipo where codigo_moveis = (select codigo from moveis as e where nome = 'Garagem');
SELECT * FROM tipo;

8) Escreva uma função que seja útil para a lógica de negócios de seu sistema e indique
o contexto de sua utilização.

Quando for ser feito uma compra a vista o produto ganha 10% de desconto;

CREATE FUNCTION `fn_Desconto`(
	`preco` FLOAT
)
BEGIN
	DECLARE desconto FLOAT;
	SET desconto = preco - (preco*0.1);
	RETURN desconto;
END
invocando:
SELECT descricao ,fn_Desconto(preco) FROM tipo WHERE codigo = 7;

9) Escreva uma Stored Procedure que implemente uma regra de negócio de sua
aplicação. Explique qual é e o porquê desta regra ser implementada no SGBD.

Cada pedido que o funcionario tiver realizado terá uma comissão de + 5% do valor do próprio salário.

CREATE DEFINER PROCEDURE `proc_comissao`(
	IN `cod` INT
)
BEGIN
	SELECT funcionarios.codigo, 
	funcionarios.nome_funcionario, 
	(funcionarios.salario + funcionarios.salario * 0.05 * (SELECT COUNT(*) FROM pedidos 
	WHERE pedidos.codigo_funcionario = funcionarios.codigo)) AS comissao 
	FROM funcionarios WHERE codigo = cod;
END
invocando:
CALL proc_comissao(3);

10) De acordo com o tema escolhido, escreva um procedimento armazenado (Stored
Procedure) para calcular totalizações do sistema. Esta totalização deve ser exibida
como resultado do procedimento ou gravada em alguma tabela.

Na minha tabela fiz um exemplo onde totaliza o preço do produto com garantia e com o valor de entrega
baseado no preço do produto;

CREATE FUNCTION `fn_Total`(
	`preco` FLOAT
)
BEGIN
	DECLARE total FLOAT;
	SET total = preco + (preco*0.02) + (preco*0.1);
	RETURN total;
END

CREATE PROCEDURE `proc_TotalGastos`(
	IN `cod` INT
)
BEGIN
	SELECT codigo, tipo.descricao, fn_Total(preco) FROM tipo WHERE codigo = cod;
END
invocando:
CALL proc_TotalGastos(9);

11) De acordo com o tema escolhido, escreva um trigger para realizar uma ação
automática que seja necessária para o sistema manter a integridade dos dados.

A cada insert na tabela pedidos será diminuido um no estoque do produto;

CREATE  TRIGGER `tr_AtualizaEstoque` AFTER INSERT ON `pedidos` FOR EACH ROW BEGIN
   UPDATE estoque
   INNER JOIN moveis ON estoque.codigo_produto = moveis.codigo
   SET quantidade = quantidade-1
   WHERE estoque.codigo_estoque = NEW.codigo_produto ;
END

invocando:
insert into pedidos (codigo_produto, codigo_funcionario, codigo_cliente, valor, observacao) values
('5', '3', '1', '860.00', 'Colchão');