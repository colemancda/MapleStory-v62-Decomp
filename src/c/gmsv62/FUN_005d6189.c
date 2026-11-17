/* FUN_005d6189 - 0x005d6189 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d6189(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar5 = *(undefined4 *)(unaff_EBP + 8);
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  uVar2 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x14) = uVar2 & 0xff;
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  iVar3 = FUN_004308f4(*(undefined4 *)(unaff_EBP + -0x10));
  if (iVar3 == 0) {
    uVar5 = FUN_005d90ec(*(undefined4 *)(unaff_EBP + -0x18));
    iVar3 = FUN_005c38a9(uVar5);
    uVar2 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar2 != 0) & uVar2 - 8;
    FUN_005d1003();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar5 = FUN_005d66ba();
    FUN_005d6697(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
    FUN_004d4ac9(unaff_EBP + -0x10,unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00434d5d();
    uVar4 = FUN_0055a766();
    uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
    uVar1 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(iVar3 + 0x100) = uVar4;
    FUN_005cfe71(uVar1,uVar5);
    FUN_005c3ed4(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8));
  }
  else {
    uVar4 = FUN_0055a766();
    uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(iVar3 + 0x100) = uVar4;
    FUN_005cfe71(uVar5,uVar1);
  }
  if (*(int *)(*(int *)(iVar3 + 0x15c) + 0x1d8) != 0) {
    FUN_005d0cc5(iVar3);
    uVar5 = FUN_007d1e08();
    *(undefined4 *)(extraout_ECX + 0x60) = uVar5;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


