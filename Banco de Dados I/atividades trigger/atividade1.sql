create database conta;

create table usuario (
    cpf varchar (11) not null,
    nome varchar (30),
    sobrenome varchar (50),
    numero_celular varchar (11),
    plano varchar (20),
    primary key (cpf)
);

create table plano (
    cod_plano int not null,
    taxa_conexao float,
    preco_segundo float,
    primary key (cod_plano)
);

create table ligacoes (
    cod_ligacao int not null,
    data_ligacao date not null,
    tempo_ligacao time not null,
    primary key (cod_ligacao)
);

create table conta_cel (
    cod_conta int not null,
    cod_ligacoes int,
    cpfs varchar (11),
    mes date,
    ano date,
    valor float,
    primary key (cod_conta),
    constraint fk_ligacoes foreign key (cod_ligacoes) references ligacoes (cod_ligacao),
    constraint fk_cpf foreign key (cpfs) references usuario (cpf)
);
