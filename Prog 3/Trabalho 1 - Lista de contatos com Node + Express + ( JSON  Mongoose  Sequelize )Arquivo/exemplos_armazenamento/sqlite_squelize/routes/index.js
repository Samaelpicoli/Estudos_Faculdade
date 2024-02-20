const express = require("express");
const router = express.Router();
const Contato = require("../models/contato");

/* GET home page. */
// Listar contatos
router.get("/", async function (req, res, next) {
  const contatos = await Contato.findAll();

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
  await Contato.drop();
  await Contato.sync();
  res.redirect("/");
});

/* GET id contato */
// Página do contato, com edit e delete
router.get("/:id", async function (req, res, next) {
  const contato = await Contato.findByPk(req.params.id);
  if (contato === null) res.render("fail_find");
  else res.render("item", { data: contato });
});

/* GET id contato - form editar*/
// Página do contato, permitindo editar
router.get("/:id/edit", async function (req, res, next) {
  const contato = await Contato.findByPk(req.params.id);
  if (contato === null) res.render("fail_find");
  else res.render("editItem", { data: contato });
});

/* PUT id contato */
// Altera contato e volta para sua página
router.put("/:id", async function (req, res, next) {
  let contato = await Contato.findByPk(req.params.id);
  if (contato === null) res.render("fail_find");
  else {
    contato = {
      nome: req.body.nome,
      email: req.body.email,
      tel: req.body.tel,
    };
    await Contato.update(contato, { where: { id: req.params.id } });
    res.redirect(`/${req.params.id}`);
  }
});

/* DELETE id contato */
// Remove contato e volta para home
router.delete("/:id", async function (req, res, next) {
  const contato = await Contato.findByPk(req.params.id);
  if (contato === null) res.render("fail_find");
  else {
    Contato.destroy({ where: { id: req.params.id } });
    res.redirect("/");
  }
});

/* POST home */
// Cria contato e mostra sua página
router.post("/", async function (req, res, next) {
  const novo = {
    nome: req.body.nome,
    email: req.body.email,
    tel: req.body.tel,
  };
  const resultado = await Contato.create(novo);
  if (resultado === null) res.render("create_fail");
  else res.redirect(`/${resultado.id}`);
});

module.exports = router;
