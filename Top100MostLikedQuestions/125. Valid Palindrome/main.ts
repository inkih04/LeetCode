function isPalindrome(s: string): boolean {
    let word = s.toLowerCase();
    const a = 'a';
    const z = 'z';

    let i = 0;
    let j = s.length -1;



    while (i < j) {
        if (!isAlphanumeric(word[i])) {
            ++i;
            continue;
        }
        if (!isAlphanumeric(word[j])){
            --j;
            continue;
        }
        if ( word[j] !== word[i]) {
            return false;
        }
        ++i;
        --j;
    } 
    return true;
    
    
};

function isAlphanumeric(c: string): boolean {
    const code = c.charCodeAt(0);
    return (
        (code >= 97 && code <= 122) || // a-z
        (code >= 48 && code <= 57)    // 0-9
    );
}
