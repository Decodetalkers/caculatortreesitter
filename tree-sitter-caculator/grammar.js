module.exports = grammar({
	name: 'cac',
	rules: {
		source_file: $ => seq(
			$._unint,
			repeat(
				$._aboveall,
			)
		),
		_aboveall: $ => seq(
			$._math,
			$._unint,
		),
		_unint: $ => choice(
			$.number,
			$.block,
		),
		_math: $ => choice(
			$.math0,
			$.math1,
		),
		math0: $ => choice(
			'+',
			'-',
		),
		math1: $ => choice(
			'*',
			'/',
		),
		block: $ => seq(
			'(',
			$._unint,
			repeat(
				$._aboveall,
			),
			')'
		),
		number: $ => /\d+/
	}
});
