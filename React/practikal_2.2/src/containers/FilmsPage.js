import React, { useState, useRef } from "react";
import { FilmContainer } from "../components/filmComponents/FilmContainer"
import { startFilmArray } from "../components/filmComponents/startFilmArray";
import { Search } from "../components/filmComponents/Search";
import { contextFilms } from "../context";
import { AddFilm } from "../components/filmComponents/AddFilm";
import mcss from '../styles/AddFilm.module.css';
import { RondomAddButton } from "../components/filmComponents/RondomAddButton";
export const films = startFilmArray;

function FilmsPage() {
  let [newFilms, setnewFilms] = useState(films);
  let filmCounnt = newFilms.length;
  let [adding, setAdding] = useState({});

  return (
    <contextFilms.Provider value={{ newFilms, setnewFilms }}>

      <div className={mcss.App}>

        <Search className={mcss.Search} />

        <span className={mcss.filmCounnt}>Count: {filmCounnt}</span>

        <AddFilm />
        
        <RondomAddButton className={mcss.Button} />

        <FilmContainer className={mcss.FilmContainer} arr={newFilms} />
      </div>

    </contextFilms.Provider>
  );
}
export default FilmsPage;

;
