/* FUN_00861b8b - 0x00861b8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00861b8b(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 < iVar2) {
    *(int *)(unaff_EBP + -0x40) = iVar1;
    *(int *)(unaff_EBP + -0x38) = iVar2;
  }
  else {
    *(int *)(unaff_EBP + -0x40) = iVar2;
    *(int *)(unaff_EBP + -0x38) = iVar1;
  }
  iVar1 = *(int *)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + 0x14);
  if (iVar1 < iVar2) {
    *(int *)(unaff_EBP + -0x3c) = iVar1;
    *(int *)(unaff_EBP + -0x34) = iVar2;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = iVar2;
    *(int *)(unaff_EBP + -0x34) = iVar1;
  }
  FUN_0086240b();
  uVar4 = *(undefined4 *)(unaff_EBP + 0x18);
  **(undefined4 **)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 8);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  *(int *)(*(int *)(unaff_EBP + -0x2c) + 4) = iVar1;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 8) = uVar3;
  *(int *)(*(int *)(unaff_EBP + -0x2c) + 0xc) = iVar2;
  FUN_004cd609(uVar4);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined ***)(unaff_EBP + -0x24) = &PTR_FUN_008f369c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00861d7a(unaff_EBP + -0x40,unaff_EBP + -0x24,0);
  uVar4 = FUN_00862f3c();
  FUN_008623dc(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined ***)(unaff_EBP + -0x24) = &PTR_FUN_008f369c;
  FUN_008631b0();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00861fdd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


