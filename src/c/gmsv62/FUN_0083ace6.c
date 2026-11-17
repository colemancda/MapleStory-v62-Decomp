/* FUN_0083ace6 - 0x0083ace6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083ace6(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_00429303();
  uVar2 = *(uint *)(iVar1 + 0x108) >> 0xd & 1;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar2 == 0) {
    FUN_0060142b(0x7d,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00457cda(6);
    FUN_00457d37(*(undefined4 *)(unaff_EBP + 8));
    FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_004751b2(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  else {
    uVar3 = FUN_00679d22(unaff_EBP + 8,0x121);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


