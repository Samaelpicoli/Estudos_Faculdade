create database Banco_do_RS;

create table conta_corrente (
    numero_conta int not null,
    saldo_atual Decimal (7,2),
    nome varchar (50),
    pix varchar (15),
    documento varchar(15),
    primary key (numero_conta)
);

create table conta_poupanca (
    numero_conta int not null,
    saldo_atual Decimal (7,2),
    nome varchar (50),
    pix varchar (15),
    documento varchar(15),
    primary key (numero_conta)
);

create table cartao_credito (
    numero_cartao int not null,
    fatura_atual Decimal (7,2),
    numero_conta int not null,
    constraint fk_conta foreign key (numero_conta) references conta_corrente (numero_conta)
);

fiz somente conta corrente os inserts:

insert into conta_corrente (numero_conta, saldo_atual, nome, pix, documento) values
(234531, 550.02, 'Samuel', '01010102011', '01010102011'),
(345732, 1456.89, 'Fernando', '054999234512', '29939134511'),
(347271, 2123.29, 'Helena', '12019099912', '12019099912');

2)
CREATE FUNCTION `fn_Saque`(
	`valor` DECIMAL(7,2),
	`saldo_atual` FLOAT
)
BEGIN
	DECLARE saque FLOAT;
	SET saque = saldo_atual - valor;
	RETURN saque;
END
CREATE PROCEDURE `proc_Saque`(
	IN `conta` INT,
	IN `valor` FLOAT
)
BEGIN
	SELECT numero_conta, fn_Saque(valor, saldo_atual)
	FROM conta_corrente WHERE numero_conta = conta;
END
invocando:
CALL proc_Saque (234531, 45);

3)
CREATE FUNCTION `fn_Deposito`(
	`valor` FLOAT,
	`saldo_atual` FLOAT
)
BEGIN
	DECLARE deposito FLOAT;
	SET deposito = saldo_atual + valor;
	RETURN deposito;
END

CREATE PROCEDURE `proc_Deposito`(
	IN `conta` INT,
	IN `valor` FLOAT
)
BEGIN
	SELECT numero_conta, fn_Deposito(valor, saldo_atual)
	FROM conta_corrente WHERE numero_conta = conta;
END

CALL proc_Deposito (234531, 445);

4)
CREATE FUNCTION `fn_Transf`(
	`saldo_atual` FLOAT,
	`cod` INT,
	`cod2` INT,
	`valor` FLOAT
)
RETURNS float
BEGIN
	DECLARE transferencia FLOAT;
	if (cod) then 
		set transferencia = saldo_atual + transferencia;
		RETURN transferencia;
   ELSEIF (cod2) then 
   	SET  transferencia = saldo_atual - valor;
	RETURN transferencia;
	END if;
END

5)
a)
create table movimentacao (
    numero_movimentacao int,
    numero_da_conta int,
    saldo_anterior DECIMAL (7,2),
    saldo_novo float,
    primary key (numero_movimentacao),
    constraint fk_numeroConta foreign key (numero_da_conta) references conta_corrente (numero_conta)
);

b)


6)
CREATE PROCEDURE `proc_InformaValor`(
	IN `valor` FLOAT
)
BEGIN 
	SELECT * FROM conta_corrente WHERE saldo_atual > valor;
END
invocando:
CALL proc_InformaValor (1622);

7)
CREATE PROCEDURE `proc_Altera`(
	IN `valor` FLOAT
)
BEGIN
	UPDATE conta_corrente SET saldo_atual = valor;
END
invocando:
CALL proc_Altera (333);
select * from conta_corrente;

8)
a)
BEGIN
	DELETE FROM movimento WHERE numero_da_conta = numero_movimentacao;
END

b)
CREATE TRIGGER `conta_corrente_after_insert` AFTER INSERT ON `conta_corrente` FOR EACH ROW BEGIN
	INSERT INTO movimento (numero_movimentacao, saldo_anterior, saldo_novo) VALUES (NEW.numero_movimentacao, 0, 0);
END

c)
CREATE TRIGGER `conta_corrente_before_delete` BEFORE DELETE ON `conta_corrente` FOR EACH ROW BEGIN
	INSERT INTO movimento (numero_da_conta, saldo_anterior, saldo_novo) VALUES (OLD.numero_da_conta, 0, 0);
END