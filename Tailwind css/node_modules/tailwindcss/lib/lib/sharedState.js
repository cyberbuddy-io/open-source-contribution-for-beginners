"use strict";
Object.defineProperty(exports, "__esModule", {
    value: true
});
exports.contextSourcesMap = exports.configContextMap = exports.contextMap = exports.env = void 0;
const env = {
    TAILWIND_MODE: process.env.TAILWIND_MODE,
    NODE_ENV: process.env.NODE_ENV,
    DEBUG: process.env.DEBUG !== undefined && process.env.DEBUG !== '0',
    TAILWIND_DISABLE_TOUCH: process.env.TAILWIND_DISABLE_TOUCH !== undefined,
    TAILWIND_TOUCH_DIR: process.env.TAILWIND_TOUCH_DIR
};
exports.env = env;
const contextMap = new Map();
exports.contextMap = contextMap;
const configContextMap = new Map();
exports.configContextMap = configContextMap;
const contextSourcesMap = new Map();
exports.contextSourcesMap = contextSourcesMap;
