const { Sequelize, DataTypes } = require("sequelize");
const sqlite = new Sequelize({
  dialect: "sqlite",
  storage: "./models/db.sqlite",
});

const Contato = sqlite.define(
  "Contato",
  {
    // Model attributes are defined here
    id: {
      type: DataTypes.INTEGER,
      autoIncrement: true,
      primaryKey: true,
    },
    nome: {
      type: DataTypes.STRING,
      allowNull: false,
    },
    tel: {
      type: DataTypes.STRING,
    },
    email: {
      type: DataTypes.STRING,
    },
  },
  {
    // options
  }
);

// CREATE TABLE IF NOT EXISTS
Contato.sync();

module.exports = Contato;
