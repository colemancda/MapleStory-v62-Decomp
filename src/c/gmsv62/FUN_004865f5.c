/* FUN_004865f5 - 0x004865f5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004865f5(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = FUN_00455c59(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  iVar1 = FUN_00458d57(5,*(undefined4 *)(iVar1 + 0x1b),*(undefined4 *)(iVar1 + 0x1f));
  if (iVar1 == 0) {
    FUN_0048b92c(0);
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
  }
  else {
    FUN_00458c4f(unaff_EBP + -0x20,5,iVar1);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar1 = FUN_0045e2eb();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
     *(int *)(unaff_EBP + -0x24) != 0)) {
    FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x1c) != 0)) {
    FUN_00449913(0);
  }
  if ((*(int *)(extraout_ECX + 0x3c4) == 0) || (iVar1 == *(int *)(extraout_ECX + 0x3c4))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(extraout_ECX + 0x3c8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


