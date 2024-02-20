criando tabelas cliente e funcionários

CREATE TABLE `cliente` (
	`id` INT(11) NOT NULL,
	`nome` VARCHAR(100) CHARACTER SET latin1 DEFAULT NULL,
	`CPF` VARCHAR(14) DEFAULT NULL,
	`email` VARCHAR(100) CHARACTER SET latin1 DEFAULT NULL,
	`sexo` VARCHAR(10) CHARACTER SET latin1 DEFAULT NULL,
	`cidade` VARCHAR(50) CHARACTER SET latin1 DEFAULT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `funcionarios` (
	`id` INT(11) NOT NULL,
	`nome` VARCHAR(100) CHARACTER SET latin1 DEFAULT NULL,
	`CPF` VARCHAR(14) DEFAULT NULL,
	`email` VARCHAR(100) CHARACTER SET latin1 DEFAULT NULL,
	`sexo` VARCHAR(10) CHARACTER SET latin1 DEFAULT NULL,
	`cidade` VARCHAR(50) CHARACTER SET latin1 DEFAULT NULL,
	PRIMARY KEY (`id`)
);

--------------------------------------------------

<cliente>
	<id>1<id>
	<nome>Rafael<Nome>
	<CPF>03290198211<CPF>
	<email>RafaelSob@gmail.com<email>
	<sexo>Masculino<sexo>
	<cidade>Erechim<cidade>
</cliente>
<cliente>
	<id>2<id>
	<nome>Taison<Nome>
	<CPF>03290156732<CPF>
	<email>taisonchinelo@gmail.com<email>
	<sexo>Masculino<sexo>
	<cidade>Porto Alegre<cidade>
</cliente>
<cliente>
	<id>3<id>
	<nome>Gabryela<Nome>
	<CPF>78212998100<CPF>
	<email>gabryelass@gmail.com<email>
	<sexo>Feminino<sexo>
	<cidade>Soledade<cidade>
</cliente>

--------------------------------------------------

<funcionarios>
	<id>1<id>
	<nome>Renato<Nome>
	<CPF>03212108211<CPF>
	<email>renatofroi@gmail.com<email>
	<sexo>Masculino<sexo>
	<cidade>Passo Fundo<cidade>
</funcionarios>
<funcionarios>
	<id>2<id>
	<nome>Pedro<Nome>
	<CPF>04444732011<CPF>
	<email>pedroquexa@gmail.com<email>
	<sexo>Masculino<sexo>
	<cidade>Santa Cruz<cidade>
</funcionarios>
<funcionarios>
	<id>3<id>
	<nome>Sandra<Nome>
	<CPF>42901299923<CPF>
	<email>sandramp@gmail.com<email>
	<sexo>Feminino<sexo>
	<cidade>Barros Cassal<cidade>
</funcionarios>

--------------------------------------------------

USE db_labdb;

LOAD XML INFILE "C:/Users/06386477979/clienteWilliam.xml"
INTO TABLE cliente
CHARACTER SET UTF8
ROWS IDENTIFIED BY '<cliente>'


USE db_labdb;

LOAD XML INFILE "C:/Users/06386477979/clienteWilliam.xml"
INTO TABLE funcionario
CHARACTER SET UTF8
ROWS IDENTIFIED BY '<funcionario>'


