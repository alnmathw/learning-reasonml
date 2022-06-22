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

        /* email text */
        <div className = "card-title-email"> 
            <p> 
                <a href="mailto:clean.code.otr@gmail.com"
                    className = "card-text-email"> 
                    {React.string("clean.code.otr@gmail.com")}
                </a>
            </p>
        </div>

        <hr/>
    </div>
}