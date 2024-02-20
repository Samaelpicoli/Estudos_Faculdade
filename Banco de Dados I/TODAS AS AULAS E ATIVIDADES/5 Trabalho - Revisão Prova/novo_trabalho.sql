create database Clinica;

create table ambulatorios (
    cod_amb int,
    andar int not null,
    capacidade int,
    primary key (cod_amb)
);

create table medicos (
    cod_m int,
    nome varchar (40) not null,
    idade int not null,
    especialidade varchar (20),
    cpf varchar (11) unique,
    cidade varchar (30),
    cod_ambulatorio int,
    primary key (cod_m),
    constraint fk_ambulatorios foreign key (cod_ambulatorio) references ambulatorios (cod_amb)
);

create table pacientes (
    cod_p int,
    nome varchar (40) not null,
    idade smallint not null,
    cidade char (30),
    cpf varchar (11) unique,
    doenca varchar(40) not null,
    primary key (cod_p)
);

create table funcionarios (
    cod_f int,
    nome varchar (40) not null,
    idade smallint,
    cpf varchar(11) unique,
    cidade varchar (30),
    salario float,
    cargo varchar (20),
    primary key (cod_f)
);

create table consultas (
    cod_medico int,
    cod_paciente int,
    data_consulta date not null,
    hora time not null,
    constraint fk_medicos foreign key (cod_medico) references medicos (cod_m),
    constraint fk_pacientes foreign key (cod_paciente) references pacientes (cod_p)
);

3)
insert into ambulatorios(cod_amb, andar, capacidade) values
(1, 1, 120),
(2, 2, 80),
(3, 3, 60),
(4, 4, 40),
(5, 5, 30);

insert into medicos (cod_m, nome, idade, especialidade, cpf, cidade, cod_ambulatorio) values
(1, 'Fernando', 37, 'Neurocirurgia', '23999923421', 'Passo Fundo', 2),
(2, 'Enrico', 52,, 'Endoscopia', '12111122311', 'Erechim', 3),
(3, 'Helena', 49, 'Pediatrica', '23245419000', 'Erechim', 4),
(4, 'Benitez', 61, 'Cardiologia', '43543590001', 'Getulio Vargas', 5),
(5, 'Sandra', 41, 'Pneumologia', '34567890011', 'Soledade', 1);

insert into pacientes (cod_p, nome, idade, cidade, cpf, doenca) values
(1, 'Luciano', 29, 'Sertão', '12332100011', 'Cardiaca'),
(2, 'Maria', 54, 'Estação', '23567891001', 'Pneumonia'),
(3, 'José', 61, 'Sertão', '45678111090', 'Endoscopica'),
(4, 'Edenilson', 36, 'Getulio Vargas', '09001008077', 'Neurocirurgia'),
(5, 'Tales', 10, 'Erechim', '05098097010', 'Pediatria');

insert into funcionarios (cod_f, nome, idade, cpf, cidade, salario, cargo) values
(1, 'Rodrigo', 26, '10120230344', 'Soledade', 2300.00, 'Atendente'),
(2, 'Gabriela', 39, '20330450611', 'Ernestina', 3900.00, 'Enfermeira'),
(3, 'Julio', 41, '89098077777', 'Estação', 2500.00, 'Recepcionista'),
(4, 'Romeu', 40, '77777123321', 'Erechim', 2800.00, 'Segurança'),
(5, 'Pablo', 32, '43245612389', 'Estação', 4000.00, 'Enfermeiro');

insert into consultas (cod_medico, cod_paciente, data_consulta, hora) values 
(2, 3, '2021-12-29', 160000),
(2, 3, '2022-11-01', 143000),
(1, 4, '2021-12-13', 102000),
(1, 4, '2021-12-28', 093000),
(3, 5, '2022-01-27', 130000),
(3, 5, '2022-03-30', 144000),
(4, 1, '2021-12-10', 080000),
(4, 1, '2022-01-21', 174000),
(5, 2, '2021-12-21', 083000),
(5, 2, '2022-03-04', 095000); 

4)
a) 
update pacientes set cidade = 'Ilhota' where cod_p = 3;

b)
UPDATE consultas set data_consulta = '2021-11-04' where cod_paciente = 1;
UPDATE consultas set hora = 120000 where cod_medico = 4;

c)
DELETE FROM funcionarios WHERE cod_f = 4;

d)
INSERT INTO funcionarios (cod_f, nome, idade, cpf, cidade, salario, cargo) VALUES 
(6, 'Matheus', 28, '21212334511', 'Soledade', '1950.00', 'Segurança'),
(7, 'Martina', 38, '45671200911', 'Sertão', '2400.00', 'Enfermeira'); 

e)
DELETE FROM pacientes WHERE doenca = 'Endoscopica';
INSERT INTO pacientes (cod_p, nome, idade, cidade, cpf, doenca) VALUES
(6, 'Henrique', 27, 'Passo Fundo', '13898100099', 'Endoscopica'); 

f)
DELETE from pacientes where idade <= 24;


5)
create table Situacao_Sistema (
    data_atualização timestamp null default current_timestamp
);

RESPOSTA mas não rodou:
CREATE TRIGGER `Atual` BEFORE UPDATE ON `situacao_sistema` FOR EACH ROW BEGIN
	NEW.data_atualizacao = NOW();
END

6)
a)
SELECT * FROM ambulatorios WHERE capacidade > 30;

b)
SELECT * FROM medicos 
WHERE idade < 40 OR especialidade = 'Traumatologia';

c)
insert into consultas (cod_medico, cod_paciente, data_consulta, hora) values 
(1, 4, '2022-05-28', 163000),
(2, 3, '2022-06-01', 140000); 
SELECT * FROM consultas WHERE consultas.data_consulta > '2022-05-15' AND hora > 130000;

d)
SELECT pacientes.nome, pacientes.idade FROM pacientes WHERE cidade != 'Passo Fundo';

e)
SELECT pacientes.nome, pacientes.idade*12 FROM pacientes; 

f)
Maior Salário:
SELECT MAX(salario) FROM funcionarios;
Menor Salário:
SELECT Min(salario) FROM funcionarios;

g)
SELECT AVG(idade), COUNT(cod_ambulatorio) FROM medicos;

7)
a)
insert into medicos (cod_m, nome, idade, especialidade, cpf, cidade, cod_ambulatorio) values
(8, 'Gisele', 43, 'Ortopedista', '88888811421', 'Passo Fundo', 4);
SELECT ambulatorios.cod_amb, ambulatorios.andar FROM ambulatorios JOIN medicos 
ON medicos.cod_ambulatorio = ambulatorios.cod_amb WHERE medicos.especialidade = 'Ortopedista';

b)
SELECT funcionarios.cod_f, funcionarios.nome, medicos.cod_m, medicos.nome, 
FROM funcionarios JOIN ambulatorios ON ambulatorios.cod_amb = funcionarios.cidade JOIN medicos 
ON medicos.cod_ambulatorio = ambulatorios.cod_amb WHERE funcionarios.cidade = medicos.cidade;

c)
SELECT pacientes.cod_p, pacientes.nome, consultas.data_consulta 
FROM consultas JOIN pacientes 
ON pacientes.cod_p = consultas.cod_paciente WHERE hora > 140000;


8)
CREATE FUNCTION fn_Liquido(
	'salario' INT
)
BEGIN
	DECLARE liquido INT;
	SET liquido = salario - (salario * 0.2);
	RETURN liquido;
END

invocando:
SELECT cod_f, fn_Liquido(salario) FROM funcionarios WHERE cod_f = 5; 

9)
Função da atividade 5)
CREATE PROCEDURE `proc_Atualzar`()
BEGIN
	NEW.data_atualizacao = NOW();
END

Funções select da atividade 6)
a)
CREATE PROCEDURE `proc_Mais30`()
BEGIN
	SELECT * FROM ambulatorios WHERE capacidade > 30;
END
invocando:
CALL proc_Mais30;

b)
CREATE PROCEDURE `proc_Menosde40Anos`()
BEGIN
	SELECT * FROM medicos WHERE idade < 40 OR especialidade = 'Traumatologia';
END
invocando:
CALL proc_Menosde40Anos;

c)
CREATE PROCEDURE `proc_ConsultasApos15`()
BEGIN
	SELECT * FROM consultas WHERE consultas.data_consulta > '2022-05-15' AND hora > 130000;
END
invocando:
CALL proc_ConsultasApos15;

d)
CREATE PROCEDURE `proc_NaoPassoFundo`()
BEGIN
	SELECT pacientes.nome, pacientes.idade FROM pacientes WHERE cidade != 'Passo Fundo';
END
invocando:
CALL proc_NaoPassoFundo;

e)
CREATE PROCEDURE `proc_IdadeMeses`()
BEGIN
	SELECT pacientes.nome, pacientes.idade*12 FROM pacientes; 
END
invocando:
CALL proc_IdadeMeses;

f)
maior salário:
CREATE PROCEDURE `proc_MaiorSalario`()
BEGIN
	SELECT MAX(salario) FROM funcionarios;
END
invocando:
CALL proc_MaiorSalario;

menor salário:
CREATE PROCEDURE `proc_MenorSalario`()
BEGIN
	SELECT MIN(salario) FROM funcionarios;
END
invocando:
CALL proc_MenorSalario;

g)
CREATE PROCEDURE `proc_MediaIdade`()
BEGIN
	SELECT AVG(idade), COUNT(cod_ambulatorio) FROM medicos;
END
invocando:
CALL proc_MediaIdade;