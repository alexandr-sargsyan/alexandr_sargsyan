import { useContext } from "react";
import mcss from "../../styles/Film.module.css";
import { contextFilms } from "../../context";
import { films } from "../../App";


export function Film(props) {
    let filmName = props.film.name;
    let discription = props.film.discription;
    let img = props.film.img;

    const { newFilms, setnewFilms } = useContext(contextFilms)

    return (
        <div className={mcss.Film}>
            <button className="buttonDelite" onClick={() => {
                setnewFilms(() => {
                    films.forEach((el, index) => { if (el.name === filmName) { films.splice(index, 1) } });
                    let newArray = films;
                    return newArray.filter(item => item.name != filmName);
                })
            }
            }>delite</button>
            <h1>{filmName}</h1>
            <img src={img} />
            <p>{discription}</p>
        </div>
    )
}