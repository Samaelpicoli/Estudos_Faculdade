const express = require("express");
const router = express.Router();
const fs = require("fs");

/* GET home page. */
// Listar contatos
router.get("/", async function (req, res, next) {
  const contatos = await JSON.parse(fs.readFileSync("./banco.json"));
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
  const writable = await JSON.stringify([], null, 4);
  await fs.writeFileSync("./banco.json", writable);
  res.redirect("/");
});

/* GET id contato */
// Página do contato, com edit e delete
router.get("/:id", async function (req, res, next) {
  const contatos = await JSON.parse(fs.readFileSync("./banco.json"));
  const contato = contatos.find((x) => x.id == req.params.id);
  res.render("item", { data: contato });
});

/* GET id contato - form editar*/
// Página do contato, permitindo editar
router.get("/:id/edit", async function (req, res, next) {
  const contatos = await JSON.parse(fs.readFileSync("./banco.json"));
  const contato = contatos.find((x) => x.id == req.params.id);
  res.render("editItem", { data: contato });
});

/* PUT id contato */
// Altera contato e volta para sua página
router.put("/:id", async function (req, res, next) {
  let contatos = await JSON.parse(fs.readFileSync("./banco.json"));
  const index = contatos.findIndex((x) => x.id == req.params.id);
  contatos[index] = {
    id: req.params.id,
    nome: req.body.nome,
    email: req.body.email,
    tel: req.body.tel,
  };
  contatos = await JSON.stringify(contatos, null, 4);
  fs.writeFileSync("./banco.json", contatos);
  res.redirect(`/${req.params.id}`);
});

/* DELETE id contato */
// Remove contato e volta para home
router.delete("/:id", async function (req, res, next) {
  let contatos = await JSON.parse(fs.readFileSync("./banco.json"));
  const toRemove = contatos.findIndex((x) => x.id == req.params.id);
  contatos.splice(toRemove, 1);
  const writable = await JSON.stringify(contatos, null, 4);
  await fs.writeFileSync("./banco.json", writable);
  res.redirect("/");
});

/* POST home */
// Cria contato e mostra sua página
router.post("/", async function (req, res, next) {
  let contatos = await JSON.parse(fs.readFileSync("./banco.json"));
  let newId;
  if (contatos) {
    if (contatos.length === 0) newId = 0;
    else newId = 1 + contatos[contatos.length - 1].id;
  }
  const novo = {
    id: newId,
    nome: req.body.nome,
    email: req.body.email,
    tel: req.body.tel,
  };
  contatos.push(novo);
  const writable = await JSON.stringify(contatos, null, 4);
  await fs.writeFileSync("./banco.json", writable);
  res.redirect(`/${newId}`);
});

module.exports = router;
