import React, { useEffect, useState } from 'react';
import { UserName } from './userName';

// import data from "./data.json";

import Header from "./Header";
import ToDoList from "./ToDoList";
import ToDoForm from './ToDoForm';

function App() {

  const [toDoList, setToDoList] = useState([]);
  const [login, setLogin] = useState(false);
  const [userName, setUserName] = useState("")

  useEffect(() => {
    fetch("http://localhost:3020/").then((resp) => resp.json()).then((resp) => {
      setToDoList(resp)
    }
    )
  }, [])



  const handleToggle = (id) => {
    let mapped = toDoList.map(task => {
      return task.id === Number(id) ? { ...task, complete: !task.complete } : { ...task };
    });
    setToDoList(mapped);
  }

  const handleFilter = () => {
    let filtered = toDoList.filter(task => {
      return !task.complete;
    });
    // setToDoList(filtered);
    // console.log(filtered);
    fetch("http://localhost:3020/", {
      method: "post",
      headers: {
        "content-type": "application/json"
      },
      body: JSON.stringify(filtered)
    })

    setToDoList(filtered)       //sta indz tvauma ta sxala 

  }

  const addTask = (userInput) => {
    let copy = [...toDoList];
    copy = [...copy, { id: (toDoList.length + 1) * 11, task: userInput, complete: false }];  // id in karelyar aveli lyav generacrac

    fetch("http://localhost:3020/", {
      method: "post",
      headers: {
        "content-type": "application/json"
      },
      body: JSON.stringify(copy)           //stael ubdateya anum
    })
    setToDoList(copy);
  }

  if (!login) {

    return (
      <UserName  login = {setLogin} username = {setUserName}/>
    )
  }
  else {
    return (
      <div className="App">
        <Header />
        <ToDoList toDoList={toDoList} handleToggle={handleToggle} handleFilter={handleFilter} />
        <ToDoForm addTask={addTask} />
        <button onClick={()=>{setLogin(!login)}}>Help</button>
      </div>
    );
  }
}

export default App;
