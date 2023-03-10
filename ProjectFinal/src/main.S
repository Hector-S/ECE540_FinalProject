#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408
#define PBR_READ    0x80001500 //Push Button Reader register.

#define VGA_FS      0x80001600 //VGA Frame Select.
#define VGA_PADDR   0x80001604 //VGA Pixel Address Selector.
#define VGA_PDOUT   0x80001608 //VGA Pixel Data Out.
#define VGA_PDIN    0x8000160C //VGA Pixel Data In.

.globl main
main:
    li x28, 0xFFFF
    li x29, GPIO_INOUT
    sw x28, 0(x29)                  # Write the Enable Register
    li a3, 120 //Holds vertical column data.
    li a4, 159 //Holds horizontal row data.
    li a1, 0x0 //a1 Holds last button states.
    li t0, VGA_PADDR
    li t1, 320
    mul t2, a3, t1 //Get pixel address from row and column. Vertical * width.
    add t2, t2, a4 //Add horizontal data.
    sw t2, 0(t0)
    li t0, VGA_PDIN
    li t1, 0x0F88  //Have our pixel data in be a white pixel.
    sw t1, 0(t0) //White pixel written to middle of screen in unselected frame.

    jal SwapFrames //Swap frames so we see middle pixel.
    jal SwapFrames //Swap frames so we see middle pixel.

MainLoop:
    //jal UpdateButtonInput
    //jal DisplayButtonState
    //jal SwapFrames
    j MainLoop //Loop

UpdateButtonInput: //After being initialized. t0, t1, and t2 don't change.
    sw ra, 0(sp) //Store return address on stack.
    addi sp, sp, -4 //Decrement stack to keep ra safe.
    li  t0, PBR_READ # Read the buttons.
    lw  t1, 0(t0) //Get current button states.
    add t2, a1, zero //Get last button states.
    li t5, 0x01 //To do comparisons.
//Left button.
    srli t3, t1, 4 //Get left-most button state.
    srli t4, t2, 4
    bne t3, t5, UBI_RB //Skip if button not is not pushed.
    bne t4, zero, UBI_RB //Skip if last check button was not pushed.
    //Move position left.
    li t3, 0 //left-most position
    beq a4, t3 , UBI_RB //Skip if in left-most position.
    addi a4, a4, -1 //Shift position left.

    j UBI_J0 //Exit. Only accept 1 button input at a time.
UBI_RB: //Right button.
    slli t3, t1, 31 //Get right-most button state.
    slli t4, t2, 31
    srli t3, t3, 31 //Get right-most button state.
    srli t4, t4, 31
    bne t3, t5, UBI_TB //Skip if button not is not pushed.
    bne t4, zero, UBI_TB //Skip if last check button was not pushed.
    //Move position right.
    li t3, 383 //Right-most position
    beq a4, t3 , UBI_TB //Skip if in right-most position.
    addi a4, a4, 1 //Shift position right.

    j UBI_J0 //Exit. Only accept 1 button input at a time.
UBI_TB: //Top button.
    slli t3, t1, 28 //Get top button state.
    slli t4, t2, 28
    srli t3, t3, 31 //Get top button state.
    srli t4, t4, 31
    bne t3, t5, UBI_DB //Skip if button not is not pushed.
    bne t4, zero, UBI_DB //Skip if last check button was not pushed.
    //Move position up.
    li t3, 0 //Up-most position
    beq a3, t3 , UBI_DB //Skip if in up-most position.
    addi a3, a3, -1 //Shift position up.

    j UBI_J0 //Exit. Only accept 1 button input at a time.
UBI_DB: //Down button.
    slli t3, t1, 30 //Get down button state.
    slli t4, t2, 30
    srli t3, t3, 31 //Get down button state.
    srli t4, t4, 31
    bne t3, t5, UBI_J0 //Skip if button not is not pushed.
    bne t4, zero, UBI_J0 //Skip if last check button was not pushed.
    //Move position down.
    li t3, 511 //Down-most position
    beq a3, t3 , UBI_J0 //Skip if in down-most position.
    addi a3, a3, 1 //Shift position down.

UBI_J0:
    add a1, t1, zero //update last button states.
    addi sp, sp, 4 //Increment stack and get ra so we can return.
    lw ra, 0(sp)
    jr ra //Return

DisplayButtonState:
    li  t0, PBR_READ # Read the buttons.
    lw  t1, 0(t0)
    slli t1, t1, 11 //Show state of buttons in left-most LEDs.
    or t1, t1, a0 //OR current position into LEDs.
    li  t2, GPIO_LEDs
    sw  t1, 0(t2) # Write the LEDs
    jr ra //Return

SwapFrames:
    li  t0, VGA_FS # Get current Frame.
    lw  t1, 0(t0)
    xori t1, t1, 0x01 //Flip Frame Select bit to make other frame the one that is displayed.
    sw  t1, 0(t0)
    jr ra //Return