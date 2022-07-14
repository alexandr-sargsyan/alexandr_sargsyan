import React from "react";
import { useRef } from "react";

export function UserName(props) {
    const input = useRef();
    const setUserName = props.username;
    const setLogin = props.login;

    return (
        <div>
            <input placeholder="yor UserName" ref={input} type="text" />
            {/* <input onChange={(ev)=> {()=>{setUserNmae(ev.target.value)}}}></input> */}
            <button onClick={() => {
                // console.log(input.current.value)
                fetch("http://localhost:3020/user", {
                    method: "post",
                    headers: {
                        "content-type": "text/plain"
                    },
                    body: input.current.value
                })
                setLogin(true)
                
            }}>open</button>

        </div>
    )
}