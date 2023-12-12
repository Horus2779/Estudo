var num = window.document.getElementById(num)
var lmt = window.document.getElementById(lmt)
var res = num*lmt
function multiplicar(){
    do{
        console.log(`${num} x ${lmt} = ${res}`)
        lmt--
    }
}