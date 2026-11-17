/* FUN_004d469a - 0x004d469a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d469a(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 8);
  iVar1 = FUN_004371d2(unaff_EBP + -0x10,unaff_EBP + -0x14);
  if ((iVar1 == 0) || (iVar1 = *(int *)(unaff_EBP + -0x14), iVar1 == 0)) {
    iVar1 = FUN_004d4c56();
    uVar2 = FUN_0042459a();
    uVar2 = FUN_004d6990(uVar2);
    uVar2 = FUN_004d148f(*(undefined4 *)(unaff_EBP + 8),uVar2);
    FUN_004d49a2(uVar2);
    *(undefined1 *)(iVar1 + 0x18) = 2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(extraout_ECX + 0x2c);
    FUN_004d4ac9(unaff_EBP + 8,(undefined4 *)(iVar1 + 0x14));
    FUN_004d1725(*(undefined4 *)(unaff_EBP + 0x10));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  else {
    if ((*(byte *)(iVar1 + 0x18) & 2) == 0) {
      *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 2;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


