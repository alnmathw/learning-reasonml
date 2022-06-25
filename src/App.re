[@react.component]

let make = () => {
  <div className = "Page"> 
    <div className = "pageHead">
      <Navbar/>
    </div>
      <div className = "pageBody">
        <SummaryCard/>
        <WhiteSpace />
        <Contact />
      </div>
      <div className = "pageHead">
      </div>
  </div>
};
