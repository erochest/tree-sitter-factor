
test: generate
  tree-sitter test

generate:
  tree-sitter generate

playground:
  tree-sitter build --wasm
  tree-sitter playground
