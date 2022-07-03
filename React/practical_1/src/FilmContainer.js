import { Film } from "./Film";
import mcss from "./FilmContainer.module.css"
function FilmContainer(props) {
    let arr = props.arr;

    let onDeliteApp = props.onDeliteApp;

    let onDelite = (filmName)=>{
        onDeliteApp(filmName)
    }
    return (
        <div className= {mcss.FilmContainer}>{
            arr.map((elem,i) =>{
                return <Film key={i}film={elem} onDelite = {onDelite} />
            })
        }
        </div>
    )
}
export {
    FilmContainer,
}