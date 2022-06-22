[@react.component]
let make = () => {
    <div className = "summary-card"> 

        <div className = "card-title-component"> 
            <img src = "media/download.png" alt = "logo" 
                className = "card-logo" />
                <div className="card-logo-overlay">
                    <div className="card-logo-text">
                    {React.string("Code With Us")}
                </div>
            </div>
        </div>

    </div>
}