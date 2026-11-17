/* FUN_00794fbb - 0x00794fbb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00794fbb(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar1;
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  uVar2 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(uint *)(unaff_EBP + -0x10) = uVar2 & 0xff;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x174c;
  iVar3 = FUN_0079daa2(unaff_EBP + 0xc,unaff_EBP + -0x28);
  if (iVar3 != 0) {
    FUN_0067dcf3(uVar4);
    FUN_0079dd08(*(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 300));
    FUN_005d0fed();
  }
  iVar3 = FUN_004029b9(0x150);
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0067ab39(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x14),
                         *(undefined4 *)(unaff_EBP + -0x10));
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0079d513(uVar1);
  FUN_0067ad87(extraout_ECX,uVar4);
  iVar3 = *(int *)(unaff_EBP + -0x24);
  uVar4 = FUN_0079d83a(unaff_EBP + -0x28);
  *(undefined4 *)(iVar3 + 300) = uVar4;
  FUN_0079db06(unaff_EBP + 0xc,unaff_EBP + -0x28);
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x24);
  FUN_0079d81d();
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_005d0fed();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


