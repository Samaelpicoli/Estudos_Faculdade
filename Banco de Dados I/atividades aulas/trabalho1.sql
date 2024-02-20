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
    PRIMARY KEY (codigo),
    constraint fk_veiculos foreign key (codigo_veiculo) references veiculos (codigo)
);

create table funcionarios (
    codigo int NOT NULL AUTO_INCREMENT,
    nome_funcionario varchar(50) NOT NULL,
    telefone varchar(12),
    endereco varchar(255) NOT NULL,
    documento varchar(11) NOT NULL,
    salario float,
    PRIMARY KEY (codigo)
);

create table clientes (
    codigo int NOT NULL AUTO_INCREMENT,
    nome_cliente varchar(50) NOT NULL,
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

insert into veiculos (nome) values 
('Sedans'), ('Motos'), ('Hatch'), ('SUV'), ('Picape');

insert into tipo (codigo_veiculo, descricao) values 
('1', 'Cruze Sedan'),
('1', 'Honda Civic'),
('2', 'Kawasaki'),
('3', 'Cruze Hatch'),
('3', 'Onix'),
('4', 'Kicks'),
('4', 'Captiva'),
('5', 'Saveiro'),
('5', 'Silverado'),
('1', 'Fusion'),
('1', 'Passat'),
('2', 'F800');

insert into funcionarios (nome_funcionario, telefone, endereco, documento, salario) values 
('Rui Costa', '054999111122', 'Rua Pedro Luiz', '00011122201', '1800,90'),
('Pedro Bala', '051999222121', 'Rua Porto Alegre', '11111234511', '1780,00'),
('Edenilson', '054996000111', 'Rua da Pipoca', '00088888888', '4000,00'),
('Cleusa', '055996111222', 'Rua Brasil', '01231231230', '2200,50'),
('Cenair', '054991999222', 'Rua Indio', '22211111111', '1600,78');

insert into clientes (nome_cliente, telefone, estado_civil, numero_filhos, endereco, documento) values 
('Everson', '054999444123', 'Solteiro', '1', 'Rua Facada', '02002012302'),
('Ana', '054999456987', 'Solteira', '0', 'Rua Sertão', '09008007012'),
('Bruce Wayne', '051998789000', 'Solteiro', '0', 'Rua Morcego', '34356700009'),
('Wesley', '055999434434', 'Casado', '2', 'Rua das Chuvas', '54556500009'),
('Andre Tamandua', '054996777111', 'Casado', '0', 'Rua Das Dores', '00023331112');

insert into pedidos (codigo_produto, codigo_funcionario, codigo_cliente, valor, observacao) values
('2', '3', '1', '55000.00', 'Honda Civic 2010'),
('5', '2', '4', '63000.00', 'Onix Turbo 2014'),
('12', '4', '3', '70000.00', 'Passat 2011'),
('12', '4', '4', '70000.00', 'Passat 2011'),
('8', '2', '5', '45000.00', 'Saveiro Surf 2009'),
('7', '1', '2', '51000.00', 'Captiva 2010'),
('1', '5', '2', '57500.00', 'Cruze 2012');

2) 
select funcionarios.nome_funcionario, clientes.nome_cliente, pedidos.valor, pedidos.observacao 
from pedidos 
inner join funcionarios on  funcionarios.codigo = pedidos.codigo_funcionario 
inner join clientes on clientes.codigo = pedidos.codigo_cliente;

3)
SELECT tipo.descricao, pedidos.observacao FROM pedidos INNER JOIN tipo ON tipo.codigo = pedidos.codigo_produto; 



