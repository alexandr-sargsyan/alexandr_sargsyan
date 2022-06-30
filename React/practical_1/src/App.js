import React, { useState } from "react";
import { FilmContainer } from "./FilmContainer"
import mcss from './App.module.css';
import Img1 from "./images/film1.png"
import Img2 from "./images/film2.jpg"
import Img3 from "./images/film3.jpg"
import Img4 from "./images/film4.jpg"
import Img5 from "./images/film5.jpg"
import Img6 from "./images/film6.jpg"
const films = [
  {
    name: "The Green Mile",
    img: Img1,
    discription: "Paul, the head guard of a prison, meets an inmate, John, an African American who is accused of murdering two girls. His life changes drastically when he discovers that John has a special gift."
  },
  {
    name: "Gladiator",
    img: Img2,
    discription: "Commodus takes over power and demotes Maximus, one of the preferred generals of his father, Emperor Marcus Aurelius. As a result, Maximus is relegated to fighting till death as a gladiator."
  },
  {
    name: "Troy",
    img: Img3,
    discription: "After Paris, a Trojan prince, has an affair with Menelaus's wife, Helen, he decides to take her with him. Later, Menelaus's brother uses that as an excuse to wage a war against the city of Troy."
  },
  {
    name: "Avengers: Infinity War",
    img: Img4,
    discription: "The Avengers must stop Thanos, an intergalactic warlord, from getting his hands on all the infinity stones. However, Thanos is prepared to go to any lengths to carry out his insane plan."
  },
  {
    name: "По соображениям совести",
    img: Img5,
    discription: "The true story of Pfc. Desmond T. Doss (Andrew Garfield), who won the Congressional Medal of Honor despite refusing to bear arms during WWII on religious grounds. Doss was drafted and ostracized by fellow soldiers for his pacifist stance but went on to earn respect and adoration for his bravery, selflessness and compassion after he risked his life -- without firing a shot -- to save 75 men in the Battle of Okinawa."
  },
  {
    name: "Bloodsport",
    img: Img6,
    discription: "Frank Dux, an American soldier who is skilled in the ways of the ninjutsu, leaves the army life behind to participate in a secret martial arts tournament."
  }
]
function App() {
  let [f1, setF1] = useState(films)
  // let [rand, setRand] = useState(films)
  return (
    <div className={mcss.App}>
      <div className={mcss.Search}>
        <input onChange={(e) => {
          setF1(() => {
            let newArray = films;
            if (e.target.value === "") {
              return films;
            }
            return newArray.filter(item => item.name.substring(0, e.target.value.length) === e.target.value);
          })
        }} type="text" placeholder="Search">
        </input>

        <button className={mcss.Button} onClick={() => {
          let rond = Math.ceil(Math.random() * (films.length - 1))
          setF1(()=> {
            let arr = films.map((el)=> { return el});
            arr.push(films[rond])
            
            return(
             arr
              // f1.push(f1[1])
              // films.push(f1[1])
            )
          })
        }} >Random</button>
      </div>
      <FilmContainer className={mcss.FilmContainer} arr={f1} />
    </div>
  );
}
export default App;
