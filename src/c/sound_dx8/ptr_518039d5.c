/* ptr_518039d5 - 0x518039d5 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int ptr_518039d5(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  uVar1 = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(short *)(unaff_EBP + 0xc) == 0) || (*(short *)(unaff_EBP + 0xc) == 10)) {
LAB_51803a02:
    *(undefined4 *)(unaff_EBP + 0x18) = uVar1;
    FUN_51804b19();
    FUN_51803aa1();
    FUN_51803aa1();
    iVar2 = FUN_51803aa1();
    if ((iVar2 == 8) || (iVar2 == 0x10)) {
      FUN_51804b19();
      iVar2 = FUN_518040fd();
      goto LAB_51803a90;
    }
  }
  else if ((*(byte *)(unaff_EBP + 0xd) & 0x40) != 0) {
    uVar1 = *(undefined4 *)(unaff_EBP + 0x14);
    goto LAB_51803a02;
  }
  iVar2 = -0x7ff8ffa9;
LAB_51803a90:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


