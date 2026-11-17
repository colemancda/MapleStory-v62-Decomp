/* Linked only into parity-test images. The client's real operator delete frees to its pool allocator
 * (0x402b41); the harness intercepts this address and records the call instead. */
void __cdecl operator delete(void *p) { (void)p; }
