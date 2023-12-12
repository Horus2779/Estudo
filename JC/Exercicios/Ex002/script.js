var inicio = window.document.getElementById("inicio")
var fim = window.document.querySelector("input#fim")
var passo = window.document.getElementById("passo")


function sequencia() {
do{
    inicio += passo
}while(inicio<=fim)
}