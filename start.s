.section .text.boot

.global _start

_start:
    adrp    x3, :got:main
    ldr     x3, [x3, #:got_lo12:main]
    br      x3

halt:
    wfe
    b       halt
