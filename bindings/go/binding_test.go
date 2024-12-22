package tree_sitter_factor_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_factor "github.com/erochest/tree-sitter-factor/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_factor.Language())
	if language == nil {
		t.Errorf("Error loading Factor grammar")
	}
}
