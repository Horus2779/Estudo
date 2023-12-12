function recpetor(){
    var msg = window.document.getElementById('msg')
    var img = window.document.getElementById('imagem')
    var data = new Date()
    var hora = 20 //data.getHours()
    msg.innerHTML = `Agora são ${hora} horas`
    if (hora >= 0 && hora < 12){
        //Bom dia
        img.scr = 'fotomanha.jpg'
        document.body.style.background = '#FFD700'
    }else if(hora >= 12 && hora <= 18){
        //Boa tarde
        img.src = 'fototarde.jpg'
        document.body.style.background = '#FFA07A'
    }else{
        //Boa noite
        img.src = 'fotonoite.jpg'
        document.body.style.background = '#4B0082'
    }
}