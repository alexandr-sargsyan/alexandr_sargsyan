import mcss from "./Film.module.css";



export  function Film(props) {
    let delite = props.onDelite;
    let filmName = props.film.name;
    let discription = props.film.discription;
    let img = props.film.img;
    return (
        <div className= {mcss.Film}>
            <button className="buttonDelite" onClick={()=>{delite(filmName)}}>delite</button>
            <h1>{filmName}</h1>
            <img src={img} />
            <p>{discription}</p>
        </div>
    )
}