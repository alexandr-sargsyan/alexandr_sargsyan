import React from "react";
import { useParams } from "react-router-dom";
import { useState } from "react";
import { films } from "../../containers/FilmsPage";
import { Link } from "react-router-dom";


export function SinglFilme() {
    const { title } = useParams();

    let arr = films;

    return (
        <div>
  
        {/* arr.map((el,i) =>{
            return(
                <Link to={`/films/${arr[i].name}`}></Link>
            )
            }) */}
        </div>
    )
}