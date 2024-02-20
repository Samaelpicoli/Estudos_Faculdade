create database revenda;

create table veiculos (
    codigo int NOT NULL AUTO_INCREMENT,
    nome varchar(50) NOT NULL,
    PRIMARY KEY (codigo)
);

create table tipo (
    codigo int NOT NULL AUTO_INCREMENT,
    codigo_veiculo int NOT NULL,
    descricao varchar(50) NOT NULL,
    preco float NOT NULL,
    PRIMARY KEY (codigo),
    constraint fk_veiculos foreign key (codigo_veiculo) references veiculos (codigo)
);

create table funcionarios (
    codigo int NOT NULL AUTO_INCREMENT,
    nome_funcionario varchar(50) NOT NULL,
    sobrenome varchar (50) NOT NULL,
    telefone varchar(12),
    endereco varchar(255) NOT NULL,
    documento varchar(11) NOT NULL,
    salario float,
    PRIMARY KEY (codigo)
);

create table clientes (
    codigo int NOT NULL AUTO_INCREMENT,
    nome_cliente varchar(50) NOT NULL,
    sobrenome varchar (50) NOT NULL,
    telefone varchar(12),
    estado_civil varchar(15),
    numero_filhos int,
    endereco varchar(255) NOT NULL,
    documento varchar(11) NOT NULL,
    PRIMARY KEY (codigo)
);

create table pedidos (
    codigo int NOT NULL AUTO_INCREMENT,
    codigo_produto int NOT NULL,
    codigo_funcionario int NOT NULL,
    codigo_cliente int NOT NULL,
    valor float NOT NULL,
    observacao varchar(255) NOT NULL,
    PRIMARY KEY (codigo),
    constraint fk_codveiculos foreign key (codigo_produto) references tipo (codigo),
    constraint fk_clientes foreign key (codigo_cliente) references clientes (codigo),
    constraint fk_funcionarios foreign key (codigo_funcionario) references funcionarios (codigo)
);

create table estoque (
    codigo_estoque int not null auto_increment,
    quantidade int null,
    codigo_produto int NOT NULL,
    PRIMARY KEY (codigo_estoque),
    constraint fk_veiculosfk foreign key (codigo_produto) references veiculos (codigo)
);

insert into veiculos (nome) values 
('Sedans'), ('Motos'), ('Hatch'), ('SUV'), ('Picape');

insert into tipo (codigo_veiculo, descricao, preco) values 
('1', 'Cruze Sedan', 63000.00),
('1', 'Honda Civic', 71500.00),
('2', 'Kawasaki', 16400.00),
('3', 'Cruze Hatch', 56800.00),
('3', 'Onix', 49702.00),
('4', 'Kicks', 45000.00),
('4', 'Captiva', 39000.00),
('5', 'Saveiro', 32500.00),
('5', 'Silverado', 43000.00),
('1', 'Fusion', 45600.00),
('1', 'Passat', 78000.00),
('2', 'F800', 13000.00);

insert into estoque (quantidade, codigo_produto) values 
('14', '1'),
('8', '2'),
(NULL, '3'),
('4', '4'),
('7', '5');

insert into funcionarios (nome_funcionario, sobrenome, telefone, endereco, documento, salario) values 
('Rui Costa', 'Porto', '054999111122', 'Rua Pedro Luiz', '00011122201', '1800.90'),
('Pedro Bala', 'Areia', '051999222121', 'Rua Porto Alegre', '11111234511', '1780.00'),
('Edenilson', 'Penal', '054996000111', 'Rua da Pipoca', '00088888888', '4000.00'),
('Cleusa', 'Brasil', '055996111222', 'Rua Brasil', '01231231230', '2200.50'),
('Cenair', 'Peixe', '054991999222', 'Rua Indio', '22211111111', '1600.78');

insert into clientes (nome_cliente, sobrenome ,telefone, estado_civil, numero_filhos, endereco, documento) values 
('Everson', 'Cam', '054999444123', 'Solteiro', '1', 'Rua Facada', '02002012302'),
('Ana', 'Laranja', '054999456987', 'Solteira', '0', 'Rua Sertão', '09008007012'),
('Bruce Wayne', 'Bat', '051998789000', 'Solteiro', '0', 'Rua Morcego', '34356700009'),
('Wesley', 'Kaiser', '055999434434', 'Casado', '2', 'Rua das Chuvas', '54556500009'),
('Andre Tamandua', 'Andrada', '054996777111', 'Casado', '0', 'Rua Das Dores', '00023331112');

insert into pedidos (codigo_produto, codigo_funcionario, codigo_cliente, valor, observacao) values
('2', '3', '1', '55000.00', 'Honda Civic 2010'),
('5', '2', '4', '63000.00', 'Onix Turbo 2014'),
('12', '4', '3', '70000.00', 'Passat 2011'),
('12', '4', '4', '70000.00', 'Passat 2011'),
('8', '2', '5', '45000.00', 'Saveiro Surf 2009'),
('7', '1', '2', '51000.00', 'Captiva 2010'),
('1', '5', '2', '57500.00', 'Cruze 2012');

1)
tabela veiculos:
CREATE PROCEDURE veiculos_insert(nome varchar(50))

 BEGIN

  insert into veiculos(nome)

values(nome);

END //
DELIMITER ;

CALL veiculos_insert('Vans');
ok

tabela tipo:
CREATE PROCEDURE tipo_insert(codigo_veiculo int, descricao varchar(50), preco float)

 BEGIN

  insert into tipo(codigo_veiculo, descricao, preco)

values(codigo_veiculo, descricao, preco);

END //
DELIMITER ;

CALL tipo_insert(1, 'Corolla', 80500.00);
ok

tabela funcionarios:
CREATE PROCEDURE funcionarios_insert(nome varchar(50), sobrenome varchar(50), telefone varchar(12), endereco varchar(255), documento varchar(11), salario float)

BEGIN

    insert into funcionarios(nome_funcionario, sobrenome, telefone, endereco, documento, salario)

    values(nome, sobrenome, telefone, endereco, documento, salario);

END //
DELIMITER ;

CALL funcionarios_insert('Samael', 'Picoli', '54999250689', 'Englert', '20123124345', '1500.67');
ok

tabela clientes:
CREATE PROCEDURE clientes_insert(nome varchar(50), sobrenome varchar(50), telefone varchar(12), estado_civil varchar(15), numero_filhos int,  endereco varchar(255),  documento varchar(11))

BEGIN

    insert into clientes(nome_cliente, sobrenome, telefone, estado_civil, numero_filhos, endereco, documento)

    values(nome, sobrenome, telefone, estado_civil, numero_filho,  endereco,  documento);

END //
DELIMITER ;

CALL clientes_insert('Taison', 'Armando', '54979250689', 'Casado', '2', 'Porto Alegre', '45678124345');
ok

tabela pedidos:
CREATE PROCEDURE pedidos_insert(codigo_produto int, codigo_funcionario int, codigo_cliente int, valor float, observacao varchar (255))

BEGIN

    insert into pedidos(codigo_produto, codigo_funcionario, codigo_cliente, valor, observacao)

    values(codigo_produto, codigo_funcionario, codigo_cliente, valor, observacao);

END //
DELIMITER ;

CALL pedidos_insert(9, 2, 4, 35000.00, 'Silverado');
ok

tabela estoque: 
CREATE PROCEDURE estoque_insert(quantidade int, codigo_produto int)

BEGIN

    insert into (quantidade, codigo_produto)

    values(quantidade, codigo_produto);


END //
DELIMITER ;

CALL estoque_insert(9, 2);
ok




