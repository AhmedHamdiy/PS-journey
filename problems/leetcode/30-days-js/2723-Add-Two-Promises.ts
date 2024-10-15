type P = Promise<number>

async function addTwoPromises(promise1: P, promise2: P): P {
    return promise1.then((a)=>promise2.then((b)=>a+b));
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */