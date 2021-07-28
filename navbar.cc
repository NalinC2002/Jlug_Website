* {
  padding: 0;
  margin: 0;
  box-sizing: border-box;
}
html {
  scroll-behavior: smooth;
  animation: fadeInAnimation ease 3s;
  font-size: 62.5%;
  box-sizing: border-box;
}

body {
  margin: 0px;
  padding: 0px;
  font-family: 'Poppins', sans-serif;
  font-weight: 300;
  color: #444;
  line-height: 1.9;
  background-color: #ffffff;
  background-size: 100% 100%;
}

/*///////////////////////////////////////////////////////////////////////////////*/
/* Navbar */

nav {
  top: 0;
  position: sticky;
  background: white;
  padding-left: 100px;
}
.logo {
  float: left;
  /*padding-left: 100px;*/
}
#logo {
  width: 65px;
  height: 65px;
}
nav .container {
  height: 65px;
  width: 90%;
  margin: 0 auto;
  padding: 10px;
  box-shadow: black;
}
nav .container {
  text-align: right;
}
nav .container ul li {
  display: inline-block;
}
nav .container ul li a {
  display: inline-block;
  font-family: cooper;
  font-size: 18px;
  text-decoration: none;
  padding: 10px 20px;
  color: black;
}
nav .container ul li.active {
  background-color: yellow;
  border-radius: 17px;
  transition: 0.3 ease background-color;
}
nav .container ul li.active a {
  color: black;
}
nav .container ul li a:hover {
  background-color: yellow;
  border-radius: 17px;
  transition: 0.3 ease background-color;
}

.menu-toggle {
  color: blue;
  float: right;
  left: 90%;
  margin-top: 3px;
  line-height: 50px;
  font-size: 35px;
  cursor: pointer;
  display: none;
}
@media (max-width: 951px) {
  nav {
    padding-left: 20px;
  }
}
@media (max-width: 791px) {
  .menu-toggle {
    display: block;
    padding-right: 15px;
    color: black;
  }
  .container {
    /*display: none;*/
    position: absolute;
    top: 65px;
    left: -100%;
    transition: 0.5s;
  }
  .container.active {
    left: 0;
  }
  nav .container ul li {
    display: flex;
    text-align: left;
  }
  nav .container ul li a {
    color: whitesmoke;
  }
  nav .container ul li a:hover {
    width: 100%;
    color: black;
    background: none;
  }
  nav .container ul {
    text-align: center;
  }
}
section {
  height: 100vh;
  width: 100%;
  align-items: centre;
  /* justify-content: center; */
  display: flex;
}

#about {
  background: linear-gradient(to right top, #333333, #dd1818);
}
#contact {
  background: linear-gradient(to right top, #ad5389, #3c1053);
}
#events {
  background: linear-gradient(to right top, #bc4e9c, #f80759);
}

/*///////////////////////////////////////////////////////////////////////////////*/
/* Home */

.header {
  padding: 0 3rem;
  height: 100vh;
  width: 100%;
  display: flex;
  flex-direction: column;
  align-items: flex-start;
  background-image: url(images/background_pc.png);
  background-size: 100% 100%;
}

@media screen and (max-width: 1330) {
  .header {
    background-size: 100% 87%;
  }
}
@media screen and (max-width: 840px) {
  .header {
    background-image: url(images/background_mobile.png);
    background-repeat: no-repeat;
    background-size: 101% 123%;
  }
}
@media screen and (max-width: 750px) {
  .header {
    background-image: url(images/background_mobile.png);
    background-repeat: no-repeat;
    background-size: 101% 123%;
  }
}

.header__title {
  flex: 1;
  max-width: 115rem;
  display: grid;
  grid-template-columns: 3fr;
  row-gap: 1rem;
  align-content: center;
  justify-content: center;
  align-items: start;
  justify-items: center;
  margin: auto 280px;
  margin-bottom: 150px;
}

.title__heading {
  font-size: 16rem;
  margin-bottom: -9rem;
  color: black;
  text-shadow: rgb(125, 175, 252) 5px 7px;
  font-family: 'Yeseva One', cursive;
}

.club__type {
  font-size: 2.8rem;
  font-weight: 500;
  grid-column: 1 / 2;
  color: rgb(26, 26, 190);
  /* font-family: 'Fjalla One', sans-serif; */
  font-family: 'Bungee', cursive;
}

.btn--text {
  display: inline-block;
  background: none;
  font-size: 1.7rem;
  font-family: inherit;
  font-weight: 500;
  color: rgb(115, 127, 236);
  border: none;
  border-bottom: 1px solid currentColor;
  padding-bottom: 2px;
  cursor: pointer;
  transition: all 0.3s;
}

@media screen and (max-width: 1050px) {
  .header__title {
    margin: auto 182px;
    margin-bottom: 82px;
  }
}
@media screen and (max-width: 940px) {
  .header__title {
    margin: auto 92px;
    margin-bottom: 82px;
  }
}

@media screen and (max-width: 840px) {
  .header__title {
    font-size: 10rem;
    margin: auto auto;
    margin-bottom: 275px;
  }
  .club__type {
    font-size: rem;
  }
}

@media screen and (max-width: 480px) {
  .title__heading {
    font-size: 10rem;
    margin-bottom: -6rem;
    text-shadow: rgb(125 175 252) 3px 4px;
  }
  .club__type {
    font-size: 1.7rem;
  }
}
@media screen and (max-width: 320px) {
  .title__heading {
    font-size: 8rem;
    margin-bottom: -5rem;
  }
  .club__type {
    font-size: 1.4rem;
  }
}

/*/////////////////////////////////////////////////////////////*/
/* Modal window */

.show-modal {
  font-size: 2rem;
  font-weight: 600;
  padding: 1.75rem 3.5rem;
  margin: 5rem 2rem;
  border: none;
  background-color: rgb(255, 255, 255);
  color: #444;
  border-radius: 10rem;
  cursor: pointer;
}

.close-modal {
  position: absolute;
  top: 1.2rem;
  right: 2rem;
  font-size: 5rem;
  color: #333;
  cursor: pointer;
  border: none;
  background: none;
}

h1 {
  font-size: 2.5rem;
  margin-bottom: 2rem;
}

p {
  font-size: 1.8rem;
}

.btn {
  display: inline-block;
  background-color: #ffff;
  font-size: 1.6rem;
  font-family: inherit;
  font-weight: 500;
  border: 3px solid grey;
  padding: 1.25rem 4.5rem;
  border-radius: 10rem;
  cursor: pointer;
  transition: all 0.3s;
  box-shadow: 5px 5px grey;
}

.btn:hover {
  background-color: #ececec;
}

/* CLASSES TO MAKE MODAL WORK */

.hidden {
  display: none;
}

.modal {
  position: fixed;
  top: 50%;
  left: 50%;
  transform: translate(-50%, -50%);
  max-width: 60rem;
  background-image: url(images/bg.png);
  padding: 5rem 6rem;
  box-shadow: 0 4rem 6rem rgba(0, 0, 0, 0.3);
  z-index: 1000;
  transition: all 0.5s;
}

.overlay {
  position: fixed;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background-color: rgba(0, 0, 0, 0.5);
  backdrop-filter: blur(4px);
  z-index: 100;
  transition: all 0.5s;
}

.modal__header {
  font-size: 3.25rem;
  margin-bottom: 4.5rem;
  line-height: 1.5;
  font-family: 'Calistoga', cursive;
}

.modal__form {
  margin: 0 3rem;
  display: grid;
  grid-template-columns: 1fr 2fr;
  align-items: center;
  gap: 2.5rem;
}

.modal__form label {
  font-size: 1.7rem;
  font-weight: 500;
  font-family: 'Open Sans', sans-serif;
}

.modal__form input {
  font-size: 1.7rem;
  padding: 1rem 1.5rem;
  border: 1px solid #ddd;
  border-radius: 0.5rem;
  background-color: rgb(238, 238, 182);
}

.modal__form button {
  grid-column: 1 / span 2;
  justify-self: center;
  margin-top: 1rem;
  font-family: 'Calistoga', cursive;
}

.close-modal {
  font-family: inherit;
  color: inherit;
  position: absolute;
  top: 0.5rem;
  right: 2rem;
  font-size: 4rem;
  cursor: pointer;
  border: none;
  background: none;
}

.hidden {
  visibility: hidden;
  opacity: 0;
}

@media screen and (max-width: 1025px) {
  .modal__header {
    font-size: 3rem;
  }
}

@media screen and (max-width: 550px) {
  .modal {
    width: 31rem;
    height: 47rem;
    padding: 10rem 2rem;
  }
  .modal__header {
    font-size: 2rem;
  }
  .modal__form label {
    font-size: 10px;
  }
  .modal__form input {
    font-size: 5px;
  }
  .btn {
    font-size: 12px;
    padding: 0.25rem 2.5rem;
    box-shadow: 2px 2px grey;
    border: 2px solid grey;
  }
}
