type Counter = {
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

function createCounter(init: number): Counter {
    this.c = init;
    return {
        increment: () => this.c = this.c+1,
        decrement: () => this.c = this.c-1,
        reset: () => this.c = init
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */