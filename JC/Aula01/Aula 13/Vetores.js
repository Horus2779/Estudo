var num = [5,6,7,8,2,4,6,9,7]
/*for(let pos=0;pos<num.length;pos++){
    console.log(`A posicao do vetor ${pos+1} equivale ${num[pos]}`,)
}*/
for(pos in num){
    console.log(`A posicao do vetor ${Number(pos)+Number(1)} equivale ${num[pos]}`,)
}