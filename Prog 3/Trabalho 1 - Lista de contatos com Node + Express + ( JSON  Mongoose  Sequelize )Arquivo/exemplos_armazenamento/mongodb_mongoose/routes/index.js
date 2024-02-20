const express = require("express");
const router = express.Router();
const Contato = require("../models/contato");
const mg = require("mongoose");

/* GET home page. */
// Listar contatos
router.get("/", async function (req, res, next) {
  const contatos = await Contato.find();
  res.render("list", { data: contatos });
});

/* GET id contato - form criar*/
// Página do contato, permitindo editar
router.get("/novo", async function (req, res, next) {
  res.render("novoItem");
});

router.get("/limpar", function (req, res, next) {
  res.render("limpar");
});

router.post("/limpar", async (req, res, next) => {
  await Contato.deleteMany({});
  res.redirect("/");
});

/* GET id contato */
// Página do contato, com edit e delete
// prettier-ignore
router.get("/:id", async function (req, res, next) {
  const contato = await Contato.findOne({ 'id': parseInt(req.params.id) });
  res.render("item", { data: contato });
});

/* GET id contato - form editar*/
// Página do contato, permitindo editar
// prettier-ignore
router.get("/:id/edit", async function (req, res, next) {
  const contato = await Contato.findOne({ 'id': req.params.id });
  res.render("editItem", { data: contato });
});

/* PUT id contato */
// Altera contato e volta para sua página
router.put("/:id", async function (req, res, next) {
  let contato = await Contato.findOne({ id: req.params.id });
  contato.nome = req.body.nome;
  contato.email = req.body.email;
  contato.tel = req.body.tel;
  contato.save();
  res.redirect(`/${req.params.id}`);
});

/* DELETE id contato */
// Remove contato e volta para home
router.delete("/:id", async function (req, res, next) {
  const contato = await Contato.findOne({ id: req.params.id });
  await Contato.findByIdAndDelete(contato._id);
  res.redirect("/");
});

/* POST home */
// Cria contato e mostra sua página
router.post("/", async function (req, res, next) {
  let newId = await Contato.estimatedDocumentCount();
  console.log(newId);
  const novo = {
    id: newId,
    nome: req.body.nome,
    email: req.body.email,
    tel: req.body.tel,
  };
  await Contato.create(novo);
  res.redirect(`/${newId}`);
});

module.exports = router;
