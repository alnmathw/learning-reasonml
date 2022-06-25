[@react.component]
let make = () => {
  <div className="home-card">
    <div className="home-title-div">
      <p className="home-title-text"> {React.string("Contact")} </p>
    </div>
    <hr />
    <div className="home-content-div">
      <div className="home-context-text">
        {React.string(
           "
            Feel free to get in touch with me. You can email me at:
             ",
         )}
        <div>
          <a
            href="mailto:clean.code.otr@gmail.com" className="contact-card-text-email">
            {React.string("clean.code.otr@gmail.com")}
          </a>
        </div>
      </div>
    </div>
    /* social media icons */
    <div className="contact-content-div">
    <a href="#" 
        className="icon-social-media fa fa-github"></a>
    <a href = "#" className="icon-social-media fa fa-envelope"></a>
    </div>
  </div>;
};
