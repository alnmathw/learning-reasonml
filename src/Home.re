[@react.component]
let make = () => {
  <div className="home-card">
    <div className="home-title-div">
      <p className="home-title-text">
        {React.string("About this website")}
      </p>
    </div>
    <div className="home-subtitle-div">
      <p className="home-subtitle-text">
        {React.string(
           "
                I created Clean Code to document my programming journey.
                This website is built using ReasonML and OCaml for me to learn more about functional languages.
                ",
         )}
      </p>
    </div>
    <hr />
    <div className="home-content-div">
      <div className="home-context-text">
        <p>
          {React.string(
             "
                        Welcome to my website.
                        Please feel free to read more
                    ",
           )}
          <a href="#"> {React.string("about me,")} </a>
          {React.string(
             "
                    or you can check out
                    ",
           )}
          <a href="#"> {React.string("my resume,")} </a>
          {React.string(" ")}
          <a href="#"> {React.string("projects,")} </a>
          {React.string("
                    view
                    ")}
          <a href="#"> {React.string("site statistics,")} </a>
          {React.string("
                    or
                    ")}
          <a href="#"> {React.string("contact me.")} </a>
        </p>
      </div>
      <div className="home-context-text">
        <p>
          {React.string(
             "
                        The code for my website is available
                    ",
           )}
          <a href=""> {React.string("here.")} </a>
        </p>
      </div>
    </div>
  </div>;
};
