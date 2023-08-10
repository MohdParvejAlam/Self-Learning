const express = require("express");
const app = express();
const port = 3000;

app.get("/", (req, res) => {
  res.write("Welcome to the home page");
  res.write("Welcome to the home page");
  res.send();
});

app.get("/about", (req, res) => {
  res.send("Welcome to the about page");
});

app.get("/temp", (req, res) => {
  res.send([
    {
      id: 1,
      Name: "Parvej Alam",
    },
    {
        id: 1,
        Name: "Parvej Alam",
      },
      {
        id: 1,
        Name: "Parvej Alam",
      },
  ]);
});

app.listen(port, () => {
  console.log(`Server listening to the port number ${port}`);
});
