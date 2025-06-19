import './App.css'
import { useForm } from "react-hook-form";

function App() {
    const {
        register,
        handleSubmit,
        watch,
        formState: { errors },
    } = useForm();
    return ( < div > Hello Ayush < /div>);
}
export default App;