package tree_sitter_poe_filter_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_poe_filter "github.com/tree-sitter-grammars/tree-sitter-poe-filter/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_poe_filter.Language())
	if language == nil {
		t.Errorf("Error loading PoE item filter grammar")
	}
}
