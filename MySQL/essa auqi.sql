/** Comandos DML - Comandos de Modelagem
	Aula 16/10/2023
	Prof. Ms. Paulo Barreto**/
    
use aula;

show tables;

/*Comando de insenção de dados
insert into <table> (colunas) values ( );*/
insert into produto (codigo,descricao,quantidadeMinima,quantidaedMaxima)
values(4,'Caderno Espiral',10,200);

/* Comando de consulta de dados select <colunas from <table>
<junção>
<predicação>
<sumarização>
<ordenação>
*/

select * from produto;


create table cliente(
codigo int not null,
nome text,
documento int);

create table fornecedor(
codigo int not null,
razao_social text,
cnpj int);

insert into cliente (codigo, nome, documento) values (1, 'Luiz',5432189);
insert into cliente (codigo, nome, documento) values (2, 'Priscila',9876543);
insert into cliente (codigo, nome, documento) values (3, 'Maria Heloisa', 8529637);
insert into cliente (codigo, nome, documento) values (4, 'João', 567890);

insert into fornecedor(codigo, razao_social, cnpj) values (1, 'Unisal - Centro Salesiano', 12345);
insert into fornecedor(codigo, razao_social, cnpj) values (2, 'Latam', 65412);
insert into fornecedor(codigo, razao_social, cnpj) values (3, 'Restaurante Bom de Garfo', 45671);

select c.codigo		'id',
		c.nome		'descricao',
        c.documento	'documento'
from cliente 
union
select f.codigo		'id',
		f.razão_social	'descricao',
        f.cnpj			'documento'
from fornecedor f;

 