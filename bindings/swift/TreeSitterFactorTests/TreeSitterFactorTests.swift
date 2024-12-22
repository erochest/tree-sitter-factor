import XCTest
import SwiftTreeSitter
import TreeSitterFactor

final class TreeSitterFactorTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_factor())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Factor grammar")
    }
}
