const container = document.querySelector('#container');

const p = document.createElement('p');
p.classList.add('p');
p.textContent = "Hey I'm red!";

container.appendChild(p);

const h3 = document.createElement('h3');
h3.classList.add('h3');
h3.textContent = "Hey I'm a blue h3!";

container.appendChild(h3);

const div = document.createElement('div');
div.classList.add('div');
div.style.border = '1px solid black';
div.style.backgroundColor = 'pink';

const h1 = document.createElement('h1');
h1.classList.add('h1');
h1.textContent = "I'm in a div";

div.appendChild(h1);

const p2 = document.createElement('p');
p2.classList.add('p');
p2.textContent = 'ME TOO!';

div.appendChild(p2);

container.appendChild(div);
