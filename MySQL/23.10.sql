
use aula;

CREATE TABLE Ambulatorios (
    nroa		integer,
    andar		numeric(3) NOT NULL,
    capadidade	smallint,
    PRIMARY KEY(nroa)
    );
    
    CREATE TABLE Medicos (
    codm		integer,
    nome		varchar(40) NOT NULL,
    idade		smallint NOT NULL,
    especialidade	char(20),
    CPF		numeric(11) UNIQUE,
    cidade		varchar(30),
    nroa		integer,
    PRIMARY KEY(codm)
    );
    
    