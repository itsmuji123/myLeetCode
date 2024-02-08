var flat = function (arr, n) {
    const result = [];

    // Define a recursive function to flatten the array
    function flatten(arr, depth) {
        arr.forEach(element => {
            if (Array.isArray(element) && depth < n) {
                // If the element is an array and depth is less than n, recursively flatten it
                flatten(element, depth + 1);
            } else {
                // Otherwise, push the element to the result array
                result.push(element);
            }
        });
    }

    // Call the recursive function with the initial array and depth 0
    flatten(arr, 0);

    return result;
};