/* FUN_006d33c0 - 0x006d33c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d33c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBP;
  undefined4 uStack_1cc;
  int iStack_1c8;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) < 0) {
    iStack_1c8 = 0xffffffff;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_1cc;
    *(undefined4 *)(extraout_ECX + 0x118) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    FUN_00679d86(&uStack_1cc,0x311);
    FUN_006d2ea2();
  }
  else {
    *(int *)(extraout_ECX + 0x118) = *(int *)(unaff_EBP + 8);
  }
  iVar3 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(DAT_00978368 + 0x204c);
  if (*(int *)(iVar3 + 0x2098) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x2098) + 4;
  }
  iStack_1c8 = unaff_EBP + -0x14;
  uStack_1cc = 0x6d3437;
  iVar1 = FUN_00455c59();
  iStack_1c8 = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_1cc = 0x6d3448;
  uVar2 = FUN_006495c0();
  iStack_1c8 = *(undefined4 *)(unaff_EBP + 0xc);
  uStack_1cc = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006d3217(*(undefined4 *)(extraout_ECX + 0x118),uVar2,iVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x1c4) = &PTR_LAB_008e84a0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_1c8 = 0;
    uStack_1cc = 0x6d347d;
    FUN_0045e7c2();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


