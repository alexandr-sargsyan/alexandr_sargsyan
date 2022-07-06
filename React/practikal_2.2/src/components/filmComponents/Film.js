import { useContext } from "react";
import mcss from "../../styles/Film.module.css";
import { contextFilms } from "../../context";
import { films } from "../../containers/FilmsPage";
import { Link, Routes, Route } from "react-router-dom";


export function Film(props) {
    let filmName = props.film.name;
    let discription = props.film.discription;
    let img = props.film.img;

    const { newFilms, setnewFilms } = useContext(contextFilms)

    // function SinglFilm() {
    //     return (
    //         <div>
    //             <h1>{filmName}</h1>
    //             <img src={img} />
    //             <p>{discription}</p>
    //         </div>
    //     )
    // }


    // <Routes>
    //     <Route path="/777" element={<SinglFilm />} />
    // </Routes>
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

            <Link className={mcss.linkGoTo} to={"/films/aaa"} >Go-To</Link>

            <h1>{filmName}</h1>
            <img src={img} />
            <p>{discription}</p>
        </div>
    )
}