/*
	Esquema de Criação do Banco de Dados
	Comando DDL create
*/
create database	aula;

/*Definir a base de dados em uso*/
use aula;

show tables;

/*Apaga a estrutura da database*/
drop database aula;

create table aluno(
ra int,
nome varchar(50),
dataNacimento date
);