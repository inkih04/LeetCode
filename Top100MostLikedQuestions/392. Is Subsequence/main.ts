function isSubsequence(s: string, t: string): boolean {
    let j = 0;
    if (!s) return true;

    for (let i = 0; i < t.length; i++) {
        if(t[i] == s[j]) {
            ++j;
            if (j === s.length ) {
                return true;
            }
        }
    }

    return false;
};
