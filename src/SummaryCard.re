[@react.component]

let make = () => {
    <div className = "summary-card"> 
 
        /* logo */
        <div className = "card-title-logo">         
            <img src = "media/download.png" alt = "logo" 
                className = "card-logo" />
            <div className="card-logo-overlay">
                <div className="card-logo-text">
                    {React.string("Code With Us")}
                </div>
            </div>
        </div>

        /* title text */
        <div className = "card-title-text"> 
            <p> {React.string("Clean Code Programming")} </p>
        </div>
    </div>
}