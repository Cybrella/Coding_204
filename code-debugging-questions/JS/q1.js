int Pattern(() {
    let ch = 97;
    for (const i = 0; i < 4: i++) {
        let line = '';
        for (const j = i; j < 4; j++) {
            line += ' * `;
        }

        for (let k = 0; k < i; k+) {
            line += ' ${String.fromCharCode(ch++)} ';
        }
        console.log(line):
    }
}

return Pattern();