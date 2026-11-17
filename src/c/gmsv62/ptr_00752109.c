/* ptr_00752109 - 0x00752109 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00752109(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 uVar4;
  
  *(undefined4 *)(unaff_EBP + -4) = param_1;
  uVar2 = FUN_0045e2eb();
  iVar3 = FUN_0054e7b3(uVar2);
  iVar1 = DAT_00978368;
  uVar2 = FUN_0045e2eb();
  *(undefined4 *)(unaff_EBP + -8) = uVar2;
  uVar4 = 0;
  uVar2 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 4))(0);
  FUN_00757a6e(10,*(int *)(unaff_EBP + 8) + 0x20,*(undefined4 *)(unaff_EBP + -8),uVar2,uVar4);
  uVar4 = FUN_00413367(iVar1 + 0x20a8,*(undefined4 *)(iVar1 + 0x20b0));
  uVar2 = *(undefined4 *)(iVar3 + 0x68);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  uVar2 = FUN_00413367(iVar3 + 0x60,uVar2);
  FUN_00758f91(uVar2,*(undefined4 *)(unaff_EBP + 0xc),0,*(undefined4 *)(unaff_EBP + 8),0,0);
  uVar4 = FUN_00413367(iVar1 + 0x20c0,*(undefined4 *)(iVar1 + 0x20c8));
  uVar2 = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  uVar2 = FUN_00413367(iVar3 + 0x18,uVar2);
  FUN_00758f91(uVar2,*(undefined4 *)(unaff_EBP + 0xc),1,*(undefined4 *)(unaff_EBP + 8),0,0);
  uVar4 = FUN_00413367(iVar1 + 0x20cc,*(undefined4 *)(iVar1 + 0x20d4));
  uVar2 = *(undefined4 *)(iVar3 + 0x38);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  uVar2 = FUN_00413367(iVar3 + 0x30,uVar2);
  FUN_00758f91(uVar2,*(undefined4 *)(unaff_EBP + 0xc),2,*(undefined4 *)(unaff_EBP + 8),0,0);
  uVar4 = FUN_00413367(iVar1 + 0x20d8,*(undefined4 *)(iVar1 + 0x20e0));
  uVar2 = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  uVar2 = FUN_00413367(iVar3 + 0x24,uVar2);
  FUN_00758f91(uVar2,*(undefined4 *)(unaff_EBP + 0xc),3,*(undefined4 *)(unaff_EBP + 8),0,0);
  uVar4 = FUN_00413367(iVar1 + 0x20e4,*(undefined4 *)(iVar1 + 0x20ec));
  uVar2 = *(undefined4 *)(iVar3 + 0x44);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  uVar2 = FUN_00413367(iVar3 + 0x3c,uVar2);
  FUN_00758f91(uVar2,*(undefined4 *)(unaff_EBP + 0xc),4,*(undefined4 *)(unaff_EBP + 8),0,0);
  uVar4 = FUN_00413367(iVar3 + 0x48,*(undefined4 *)(iVar3 + 0x50));
  uVar2 = *(undefined4 *)(iVar1 + 0x20f8);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  uVar2 = FUN_00413367(iVar1 + 0x20f0,uVar2);
  uVar4 = FUN_00413367(iVar3 + 0x48,*(undefined4 *)(iVar3 + 0x50));
  FUN_00758f91(uVar4,uVar2,5,*(undefined4 *)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc) == 0,0);
  uVar2 = FUN_00413367(iVar3 + 0x54,*(undefined4 *)(iVar3 + 0x5c));
  FUN_00751502(*(undefined4 *)(unaff_EBP + 8),uVar2);
  return;
}


