const image1 = document.getElementById('img1')
const image3 = document.getElementById('img3')
const image4 = document.getElementById('img4')

const textInput1 = document.getElementById('textInput1')
const textInput2 = document.getElementById('textInput2')
const numInput = document.getElementById('numInput')
const radioBtn = document.getElementById('radioBtn')
const btn = document.getElementById('btn')

const footerBlock = document.querySelector('footer')
const hoverText = document.getElementById('hoverText')

hoverText.innerHTML = ''

image1.addEventListener('mouseover', function(){
    hoverText.innerHTML = 'Lorem ipsum dolor sit amet, consectetur adipisicing elit. Quidem, odit eligendi minima sint error nesciunt quae, est porro velit deserunt ut eum impedit cumque corporis mollitia aut veritatis? Nam, deleniti.'
})

image1.addEventListener('mouseout', function(){
    hoverText.innerHTML = ''
})

image3.addEventListener('click', function(){
    image3.style.border = '10px solid red'
})

image3.addEventListener('dblclick', function() {
    image3.style.border = 'none'
})

image4.addEventListener('mouseover', function(){
    image4.src = 'img5.jpg'
})

image4.addEventListener('mouseout', function() {
    image4.src = 'img4.jpg'
})

btn.addEventListener('click', function(){
    event.preventDefault()
    //footerBlock.innerHTML = "mvksrerfk"
   footerBlock.innerHTML = `<div>
        <h1>Footer</h1>
        <p><b>Адрес</b>: ${textInput1.value}</p>
        <p><b>Название товара</b>: ${textInput2.value}</p>
        <p><b>Количество товаров</b>: ${numInput.value < 0 ? 0 : numInput.value}</p>
   </div>`
})
