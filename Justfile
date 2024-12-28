
test: generate
  tree-sitter test

generate:
  tree-sitter generate

playground:
  tree-sitter build --wasm
  tree-sitter playground

highlight source_file:
  tree-sitter highlight --html {{source_file}}

parse source_file:
  tree-sitter parse {{source_file}}
