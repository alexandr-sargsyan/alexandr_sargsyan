import React from "react";
import { Routes, Route, Outlet } from "react-router-dom";
import FilmsPage from "./FilmsPage"
import { HomePage } from "./HomePage";
import { HeaderPage } from "../components/HeadContainerComponents/HeaderPage";
import { NotFoundPage } from "../components/HeadContainerComponents/NotFoundPage";
import mcss from "../styles/HeadConainer.module.css"
import { Film } from "../components/filmComponents/Film";
import { SinglFilme } from "../components/HeadContainerComponents/SinglFilme";


export function HeadContainer() {


    return (
        <>
            <Routes>
                <Route path="/" element={<HeaderPage />}>
                    <Route index element={<HomePage />} />
                    <Route path="" element={<Outlet />}>
                        <Route path="films" element={<FilmsPage />} />
                        <Route path="films/:title" element={<SinglFilme />} />
                    </Route>
                    <Route path="*" element={<NotFoundPage />} />
                </Route>
            </Routes>
        </>
    )
}