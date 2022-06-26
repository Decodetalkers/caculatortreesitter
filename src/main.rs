use slint::SharedString;
use tree_sitter::Node;
slint::include_modules!();
enum Math0 {
    Add,
    Delete,
}
enum Math1 {
    Cross,
    Division,
}
fn getanswer(input: Node, source: &str) -> f64 {
    let mut output = 0.0;
    if input.child_count() == 0 {
        0.0
    } else {
        let mut course = input.walk();
        let mut cross = false;
        let mut crossmethod = Math1::Cross;
        let mut addmethod = Math0::Add;
        let mut temp = 0.0;
        let mut crossnumber = 1.0;
        for node in input.children(&mut course) {
            match node.kind() {
                "math0" => {
                    let start = node.start_position().column;
                    let end = node.end_position().column;
                    let method = &source[start..end];
                    match addmethod {
                        Math0::Add => {
                            if cross {
                                match crossmethod {
                                    Math1::Cross => output += crossnumber * temp,
                                    Math1::Division => output += crossnumber / temp,
                                }
                                cross = false;
                                crossnumber = 1.0;
                                crossmethod = Math1::Cross;
                            } else {
                                output += temp;
                            }
                        }
                        Math0::Delete => {
                            if cross {
                                match crossmethod {
                                    Math1::Cross => output += crossnumber * temp,
                                    Math1::Division => output += crossnumber / temp,
                                }
                                //output -= crossnumber * temp;
                                cross = false;
                                crossnumber = 1.0;
                                crossmethod = Math1::Cross;
                            } else {
                                output -= temp;
                            }
                        }
                    }
                    match method {
                        "+" => addmethod = Math0::Add,
                        "-" => addmethod = Math0::Delete,
                        _ => {}
                    }
                }
                "math1" => {
                    let start = node.start_position().column;
                    let end = node.end_position().column;
                    let method = &source[start..end];
                    cross = true;
                    match crossmethod {
                        Math1::Cross => crossnumber *= temp,
                        Math1::Division => crossnumber /= temp,
                    }
                    match method {
                        "*" => crossmethod = Math1::Cross,
                        "/" => crossmethod = Math1::Division,
                        _ => {}
                    }
                }
                "number" => {
                    let start = node.start_position().column;
                    let end = node.end_position().column;
                    let num = &source[start..end].parse::<f64>().unwrap();
                    temp = *num;
                    //output += num;
                }
                "block" => {
                    temp = getanswer(node, source);
                }
                _ => {}
            }
        }
        if cross {
            let preoutput = match crossmethod {
                Math1::Cross => crossnumber * temp,
                Math1::Division => crossnumber / temp,
            };
            match addmethod {
                Math0::Add => output += preoutput,
                Math0::Delete => output -= preoutput,
            }
        } else {
            match addmethod {
                Math0::Add => output += temp,

                Math0::Delete => output -= temp,
            }
        }
        output
    }
}
fn main() {
    //let source = "11/11+sin(9*(2*6 / 4))";
    //let source = "1*5/5 + 9";
    //let source = "2-2*1";

    //let a = get_number(tree_node, source);
    //println!("{a}");
    //let a = getnumber(tree_node, source);
    //println!("{a}");
    //let a = getanswer(tree_node, source);
    //println!("{a}");
    let ui = AppWindow::new();
    let ui_handle = ui.as_weak();
    ui.on_caculate(move || {
        let ui = ui_handle.unwrap();
        let source = ui.get_input().to_string();
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(tree_sitter_cac::language()).unwrap();
        let tree = parser.parse(&source, None).unwrap();
        let tree_node = tree.root_node();
        let a = getanswer(tree_node, &source);
        ui.invoke_caculater(SharedString::from(a.to_string()));
    });
    //ui.on_caculate(move ||{
    //    let ui = ui_handle.unwrap();

    //});

    //let ui_handle = ui.as_weak();
    //ui.on_request_increase_value(move || {
    //    let ui = ui_handle.unwrap();
    //    ui.set_counter(ui.get_counter() + 1);
    //});

    ui.run();
    //println!("Hello, world!");
}
#[cfg(test)]
mod tests {
    #[test]
    fn test_gamma() {
        let source = "111+22+(1*3)";
        let mut parser = tree_sitter::Parser::new();

        parser.set_language(tree_sitter_cac::language()).unwrap();
        let tree = parser.parse(source, None).unwrap();
        assert_eq!(
            tree.root_node().to_sexp(),
            "(source_file (number) (math0) (number) (math0) (block (number) (math1) (number)))"
        );
    }
}
