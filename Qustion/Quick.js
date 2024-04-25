var argumentsLength = function(...args) {
    if (args.length === 1 && Array.isArray(args[0])) {
        return args[0].length;
    }
    return args.length;
};

let num = ["kreet", "ritesh", 3, 4, 3, 2]; 
console.log(argumentsLength(num));  // This will now output 6