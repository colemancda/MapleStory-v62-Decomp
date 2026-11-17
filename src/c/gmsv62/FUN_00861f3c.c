/* FUN_00861f3c - 0x00861f3c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00861f3c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar2 = *(undefined4 **)(extraout_ECX + 0x18);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0087b2f0(unaff_EBP + -0xb0,0x1c,5,&LAB_00861fd2,FUN_00861fdd);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00862ec4();
    FUN_0086243e(unaff_EBP + -0xb8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0087a0b8(unaff_EBP + -0xb0,0x1c,5,FUN_00861fdd);
    puVar2 = *(undefined4 **)(extraout_ECX + 0x14);
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x18) = *puVar2;
  }
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *puVar2 = 0;
  puVar2[0x25] = 0;
  puVar2[0x26] = 0;
  puVar2[1] = uVar1;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


