fn main() {
    let src_dir = std::path::Path::new("src");

    let mut c_config = cc::Build::new();
    c_config.include(src_dir);
    c_config.flag_if_supported("-Wno-parentheses");

    let parser_path = src_dir.join("parser.c");
    c_config.file(&parser_path);

    c_config.compile("parser");
    println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());
}
