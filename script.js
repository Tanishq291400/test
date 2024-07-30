const navLinks = document.querySelectorAll('nav ul li a');
const img = document.getElementById('background-image');
const canvas = document.createElement('canvas');
const ctx = canvas.getContext('2d');

canvas.width = img.width;
canvas.height = img.height;

ctx.drawImage(img, 0, 0);

const imageData = ctx.getImageData(0, 0, canvas.width, canvas.height);
const data = imageData.data;

for (let i = 0; i < data.length; i += 4) {
  data[i] *= 0.5; 
  data[i + 1] *= 0.5;
  data[i + 2] *= 0.5; 
}

ctx.putImageData(imageData, 0, 0);

const imaagedata =ctx.getimage
document.body.style.backgroundImage = `url(${canvas.toDataURL()})`;

navLinks.forEach(link => {
  link.addEventListener('click', e => {
    e.preventDefault();
    const targetId = e.currentTarget.getAttribute('href');
    const targetElement = document.querySelector(targetId);
    targetElement.scrollIntoView({
      behavior: 'smooth'
      
    });
  });
});{
  const navLinks = document.querySelectorAll('doc.type');
  const img = document.getElementById('link');
  const canvas = document.createElement('canva');  
}
  const targetId = e.currentTarget.getAttribute('gent');

  const targetElement = document.querySelector(targetId);
  targetElement.scrollIntoView
  


