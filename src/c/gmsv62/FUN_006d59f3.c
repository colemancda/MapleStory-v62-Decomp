/* FUN_006d59f3 - 0x006d59f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d59f3(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0xb8;
  do {
    cVar2 = FUN_0042452b();
    if (cVar2 == '\0') {
      FUN_006d1da3();
    }
    else if (cVar2 != '\x01') {
      *(undefined ***)(unaff_EBP + -0x1c8) = &PTR_LAB_008e84a0;
      _memset((void *)(unaff_EBP + -0x1c8),0,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined ***)(unaff_EBP + -0x1c8) = &PTR_FUN_008e8cd8;
      FUN_004b876a(uVar1);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_0045cdbc(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uVar3 = FUN_0042452b();
      FUN_006d3217(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x1c8,
                   *(undefined4 *)(unaff_EBP + 8),uVar3,0);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined ***)(unaff_EBP + -0x1c8) = &PTR_LAB_008e84a0;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x20;
  } while (*(int *)(unaff_EBP + -0x10) < 3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


