import XCTest
import SwiftTreeSitter
import TreeSitterPoEFilter

final class TreeSitterPoEFilterTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_poe_filter())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading PoE item filter grammar")
    }
}
