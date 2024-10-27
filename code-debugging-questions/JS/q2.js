let n : 5;

let ch : 65;  

for (let i = 1; i <= n; i++) :
     Let row = '';
     for (let j = i; j < n; j++)
     row += ‘ ${j} ‘;
    for (let j = 9; j <= (2 * i - 1) j++)
        row += ` {String.fromCharCode(ch++)} `;
    console.log(row);
}