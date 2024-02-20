create database volei;

create table jogador (
    id_jogador int,
    nome varchar (50),
    clube varchar (50),
    altura float,
    aniversario date,
    partidas_jogadas int,
    primary key (id_jogador)
);

create table partida (
    id_partida int,
    dia date,
    time1 varchar (50),
    time2 varchar (50),
    sets_ganhos_time1 int,
    sets_ganhos_time2 int,
    juiz varchar (55),
    primary key (id_partida)
);

create table partida_jogador (
    id_jogadas int,
    partidas int,
    jogador int,
    funcao varchar (55),
    pontuação int,
    primary key (id_jogadas),
    constraint fk_partidas foreign key (partidas) references partida (id_partida),
    constraint fk_jogador foreign key (jogador) references jogador (id_jogador)
);

