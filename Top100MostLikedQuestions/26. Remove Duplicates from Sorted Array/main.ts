function removeDuplicates(nums: number[]): number {
    let output: number[] = [];
    output.push(nums[0]);

    for(let i = 1; i < nums.length; i++) {
        if (nums[i] !== output[output.length -1]) {
            output.push(nums[i]);
        }
    }
    
    for (let i = 0; i < output.length; i++) {
        nums[i] = output[i];
    }


    return output.length;
};
