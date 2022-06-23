[@react.component]
let make = () => {
<nav className="navbar"> 
    <div className = "navbar-brand-div"> 
        <a className="navbar-brand" href="#"> {React.string("Clean Code")} </a> 
        <br/> <p className="navbar-sub-brand"> {React.string("All Things Programming")} </p>
    </div>

    <div> 
        <a className="navbar-item" href="#"> {React.string("About")} </a> 
    </div>

    <div> 
        <a className="navbar-item" href="#"> {React.string("Resume")} </a> 
    </div>

    <div> 
        <a className="navbar-item" href="#"> {React.string("Projects")} </a> 
    </div>

    <div> 
        <a className="navbar-item" href="#"> {React.string("Statistics")} </a> 
    </div>

    <div> 
        <a className="navbar-item navbar-last-item" href="#"> {React.string("Contact")} </a> 
    </div>
</nav>
}