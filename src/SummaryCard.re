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

        /* about header */
        <div className = "card-about-header-div">
            <p className = "card-about-header-text">    
                {React.string("About")}
            </p>
        </div>

        /* about text */
        <div className = "card-about-text-div">
            <p className = "card-about-content-text">    
                {React.string("
                    Hi, my name is Alan M. I like building things. 
                    I am a fullstack software engineer at Investree. 
                    I use Vuejs and Kotlin to build internal tools and enterprise software.
                    Before Investree, I was a trading analyst at Kredens Capital and Singular Asset Management.
                ")}
            </p>
            <p className = "card-about-content-text"> 
            {React.string("
                    I made Clean Code to document my programming journey and learn more about functional languages.
                    This website is built using ReasonML and OCaml.
                    Work aside, I also enjoy trading, probability, hiking and Dota 2.
                ")}
            </p>
        </div>

        /* learn more button */
        <div className = "card-learn-more-div"> 
            <button className = "card-button button-learn-more"> 
                {React.string("Learn More")}
            </button>
        </div>

        <hr/>

        /* social media icons */
    </div>
}