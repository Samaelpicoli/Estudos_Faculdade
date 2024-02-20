const mongoose = require("mongoose");
const Schema = mongoose.Schema;

const ContatoSchema = new Schema({
  id: Number,
  nome: String,
  tel: String,
  email: String,
});

module.exports = mongoose.model("Contato", ContatoSchema);
