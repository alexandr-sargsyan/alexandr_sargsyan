import mcss from "./Film.module.css";

export  function Film(props) {
    let filmName = props.film.name;
    let discription = props.film.discription;
    let img = props.film.img;
    return (
        <div className= {mcss.Film}>
            <h1>{filmName}</h1>
            <img src={img} />
            <p>{discription}</p>
        </div>
    )
}