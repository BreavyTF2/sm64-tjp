# SM64 Crash Handler
# See Readme below.

.include "macros.inc"

/* ---------------------------------------------------------------
 * IMPORTANT README:
 * ---------------------------------------------------------------
 * Frame buffer emulation is required. To enable it in GlideN64,
 * check "Emulate frame buffer" and "Render frame buffer to output"
 * in the "Frame buffer" tab.
 *
 * Your emulator's CPU core style should be set to interpreter for best results.
 *
 * See the DEBUG_ASSERT macro on how to call the crash screen for
 * detected exceptions.
 *
 */

.set noat
.set noreorder
.set gp=64

.set COP0_CAUSE, $13
.set COP0_EPC, $14
.set COP0_BADVADDR, $8

glabel crashFont
    .incbin "enhancements/crash_font.bin"
    .align 4

glabel exceptionRegContext
    .fill 0x108

glabel pAssertFile
    .dword 0
glabel nAssertLine
    .dword 0
glabel pAssertExpression
    .dword 0
glabel nAssertStopProgram
    .dword 0

glabel _n64_assert
    lui  $at, %hi(pAssertFile)
    sw   $a0, %lo(pAssertFile)($at)
    lui  $at, %hi(nAssertLine)
    sw   $a1, %lo(nAssertLine)($at)
    lui  $at, %hi(pAssertExpression)
    sw   $a2, %lo(pAssertExpression)($at)
    lui  $at, %hi(nAssertStopProgram)
    sw   $a3, %lo(nAssertStopProgram)($at)
    beqz $a3, .end_2
     nop
    syscall # trigger crash screen
.end_2:
    jr $ra
     nop

glabel cop0_get_cause
    jr   $ra
     mfc0 $v0, COP0_CAUSE

glabel cop0_get_epc
    jr   $ra
     mfc0 $v0, COP0_EPC

glabel cop0_get_badvaddr
    jr   $ra
     mfc0 $v0, COP0_BADVADDR

# If the error code field of cop0's cause register is non-zero,
# draw crash details to the screen and hang
#
# If there wasn't an error, continue to the original handler

glabel __crash_handler_entry
    mfc0  $k1, COP0_CAUSE
    andi  $k1, $k1, (0x1F << 2)
    beqzl $k1, .end2  # exit if ExCode is 0
     lui   $k0, %hi(__osException)
    la    $k0, exceptionRegContext
    sd    $zero, 0x018 ($k0)
    sd    $at, 0x020 ($k0)
    sd    $v0, 0x028 ($k0)
    sd    $v1, 0x030 ($k0)
    sd    $a0, 0x038 ($k0)
    sd    $a1, 0x040 ($k0)
    sd    $a2, 0x048 ($k0)
    sd    $a3, 0x050 ($k0)
    sd    $t0, 0x058 ($k0)
    sd    $t1, 0x060 ($k0)
    sd    $t2, 0x068 ($k0)
    sd    $t3, 0x070 ($k0)
    sd    $t4, 0x078 ($k0)
    sd    $t5, 0x080 ($k0)
    sd    $t6, 0x088 ($k0)
    sd    $t7, 0x090 ($k0)
    sd    $s0, 0x098 ($k0)
    sd    $s1, 0x0A0 ($k0)
    sd    $s2, 0x0A8 ($k0)
    sd    $s3, 0x0B0 ($k0)
    sd    $s4, 0x0B8 ($k0)
    sd    $s5, 0x0C0 ($k0)
    sd    $s6, 0x0C8 ($k0)
    sd    $s7, 0x0D0 ($k0)
    sd    $t8, 0x0D8 ($k0)
    sd    $t9, 0x0E0 ($k0)
    sd    $gp, 0x0E8 ($k0)
    sd    $sp, 0x0F0 ($k0)
    sd    $fp, 0x0F8 ($k0)
    sd    $ra, 0x100 ($k0)
    # cop unusable exception fired twice on startup so we'll ignore it for now
    li    $t0, (0x0B << 2)
    beq   $k1, $t0, .end
     nop
    jal   show_crash_screen_and_hang
     nop
    .end:
    ld    $at, 0x020 ($k0)
    ld    $v0, 0x028 ($k0)
    ld    $v1, 0x030 ($k0)
    ld    $a0, 0x038 ($k0)
    ld    $a1, 0x040 ($k0)
    ld    $a2, 0x048 ($k0)
    ld    $a3, 0x050 ($k0)
    ld    $t0, 0x058 ($k0)
    ld    $t1, 0x060 ($k0)
    ld    $t2, 0x068 ($k0)
    ld    $t3, 0x070 ($k0)
    ld    $t4, 0x078 ($k0)
    ld    $t5, 0x080 ($k0)
    ld    $t6, 0x088 ($k0)
    ld    $t7, 0x090 ($k0)
    ld    $s0, 0x098 ($k0)
    ld    $s1, 0x0A0 ($k0)
    ld    $s2, 0x0A8 ($k0)
    ld    $s3, 0x0B0 ($k0)
    ld    $s4, 0x0B8 ($k0)
    ld    $s5, 0x0C0 ($k0)
    ld    $s6, 0x0C8 ($k0)
    ld    $s7, 0x0D0 ($k0)
    ld    $t8, 0x0D8 ($k0)
    ld    $t9, 0x0E0 ($k0)
    ld    $gp, 0x0E8 ($k0)
    ld    $sp, 0x0F0 ($k0)
    ld    $fp, 0x0F8 ($k0)
    ld    $ra, 0x100 ($k0)
    lui   $k0, %hi(__osException)
    .end2:
    addiu $k0, $k0, %lo(__osException)
    jr    $k0 # run the original handler
     nop
