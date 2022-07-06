import React from "react";
import { films } from "../../containers/FilmsPage";
import { useContext } from "react";
import { contextFilms } from "../../context";

export function RondomAddButton() {

    const { newFilms, setnewFilms } = useContext(contextFilms)

    return (
        <button onClick={() => {
            let rond = Math.ceil(Math.random() * (films.length - 1))
            setnewFilms(() => {
                films.push(films[rond])
                let arr = films.map((el) => { return el });
                return (
                    arr
                )
            })
        }} >Random</button>
    )
}