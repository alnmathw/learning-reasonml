[@react.component]

let make = () => {
  <div className = "Page"> 
    <div className = "pageHead">
      <Navbar/>
    </div>
      <div className = "pageBody">
        <SummaryCard/>
        <WhiteSpace />
        <Home />
      </div>
      <div className = "pageHead">
      </div>
  </div>
};
